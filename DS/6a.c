#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
    char ID[15];
    char name[20];
    char branch[5];
    char area[10];
    struct Node *prev;
    struct Node *next;
};
struct Node *head, *top = 0;
void push(char ID[20], char n[20], char branch[5], char area[30])
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    strcpy(newnode->ID, ID);
    strcpy(newnode->name, n);
    strcpy(newnode->branch, branch);
    strcpy(newnode->area, area);
    newnode->prev = 0;
    newnode->next = 0;
    if (top == 0)
        head = top = newnode;
    else
    {
        top->next = newnode;
        newnode->prev = top;
        top = newnode;
    }
}
void pop()
{
    struct Node *temp;
    if (top == 0)
        printf("Stack is  Empty\n");
    else
    {
        temp = top;
        printf("Deleted Node is \n");
        printf("ID :%s\nName : %s\nBranch :%s\nArea of Specialization : %s\n", temp->ID, temp->name, temp->branch, temp->area);
        top->prev->next = 0;
        top = top->prev;
        free(temp);
    }
}
void display()
{
    int count = 0;
    struct Node *temp;
    if (top == 0)
        printf("Stack is Empty\n");
    else
    {
        printf("Employee Details \n");
        temp = head;
        while (temp != NULL)
        {
            printf("ID :%s\nName : %s\nBranch :%s\nArea of Specialization : %s\n", temp->ID, temp->name, temp->branch, temp->area);
            temp = temp->next;
            count++;
        }
        printf("Count of nodes = %d\n", count);
    }
}
int main()
{
    int choice;
    char ID[15], n[20], branch[20], area[10];
    while (1)
    {
        printf("1.PUSH \n2.POP\n3.Display\n4.Exit\n");
        printf("Enter your Choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter ID, Name, Branch, Area of specialization respectively\n");
            // scanf("%s %s %s %s\n", ID, n, branch, area);
            scanf("%s\n", ID);
            scanf("%s\n", n);
            scanf("%s\n", branch);
            scanf("%s\n", area);
            push(ID, n, branch, area);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            exit(0);
        }
        default:
            printf("Invalid Choice\n");
        }
    }
}