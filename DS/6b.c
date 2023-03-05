#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Pnode
{
    char ID[20];
    char name[20];
    char branch[20];
    char area[20];
    struct Pnode *prev;
    struct Pnode *next;
};
struct Pnode *front = 0;
struct Pnode *rear = 0;
void enque(char ID[20], char n[20], char branch[20], char areaofspec[20])
{
    struct Pnode *newnode;
    newnode = (struct Pnode *)malloc(sizeof(struct Pnode));
    strcpy(newnode->ID, ID);
    strcpy(newnode->name, n);
    strcpy(newnode->branch, branch);
    strcpy(newnode->area, areaofspec);
    newnode->prev = 0;
    newnode->next = 0;
    if (front == 0 && rear == 0)
        front = rear = newnode;
    else
    {
        rear->next = newnode;
        newnode->prev = rear;
        rear = newnode;
    }
}
void deque()
{
    struct Pnode *temp;
    if (front == 0 && rear == 0)
        printf("queue is empty\n");
    else
    {
        temp = front;
        printf("deleted node is:\n");
        printf("ID:%s\nNAME:%s\nBRANCH:%s\nArea of specialization:%s\n", temp->ID, temp->name, temp->branch, temp->area);
        front = temp->next;
        front->prev = NULL;
        free(temp);
    }
}
void display()
{
    int count = 0;
    struct Pnode *temp;
    if (front == 0 && rear == 0)
        printf("Queue is empty \n");
    else
    {
        printf("Employee Details:\n");
        temp = front;
        while (temp != NULL)
        {
            printf("ID:%s\nNAME:%s\nBRANCH:%s\nArea of specialization:%s\n", temp->ID, temp->name, temp->branch, temp->area);
            temp = temp->next;
            count++;
        }
        printf("Count of nodes =%d \n", count);
    }
}
int main()
{
    int choice;
    char ID[20], name[20], branch[20], areaOfSpecialization[20];
    while (1)
    {
        printf("1.ENQUE \n2.DEQUEUE\n3.Display\n4.Exit\n");
        printf("Enter your Choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter ID, Name, Branch, Area of specialization respectively\n");
            // scanf("%s %s %s %s\n", ID, n, branch, area);
            scanf("%s\n", ID);
            scanf("%s\n", name);
            scanf("%s\n", branch);
            scanf("%s\n", areaOfSpecialization);
            enque(ID, name, branch, areaOfSpecialization);
            break;
        }
        case 2:
        {
            deque();
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