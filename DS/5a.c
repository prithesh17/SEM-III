#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top = 0;
void push(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link = top;
    top = newnode;
}
void pop()
{
    struct node *temp;
    temp = top;
    if (temp == NULL)
        printf("Underflow\n");
    else
    {
        printf("Deleted item is %d \n", top->data);
        top = temp->link;
        free(temp);
    }
}
void display()
{
    struct node *temp;
    temp = top;
    if (temp == NULL)
        printf("Stack is Empty\n");
    else
    {
        while (temp != NULL)
        {
            printf("%d \t", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}
void linearsearch()
{
    struct node *temp;
    int flag = 0, i = 1, key;
    printf("enter the element to be searched \n");
    scanf("%d", &key);
    temp = top;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            flag = 1;
            break;
        }
        temp = temp->link;
        i++;
    }
    if (flag == 1)
        printf("Key element %d found at position %d\n", key, i);
    else
        printf("Search Unsuccessful\n");
}
void dataconcatenation()
{
    struct node *head1, *head2, *temp1, *temp2, *newnode1, *newnode2, *j;
    int n, i;
    printf("Number of elemnts in A :");
    scanf("%d", &n);
    head1 = NULL;
    for (i = 0; i < n; i++)
    {
        newnode1 = malloc(sizeof(struct node));
        scanf("%d", &newnode1->data);
        newnode1->link = 0;
        if (head1 == 0)
            head1 = temp1 = newnode1;
        else
        {
            temp1->link = newnode1;
            temp1 = newnode1;
        }
    }
    printf("Number of elemnts in B :");
    scanf("%d", &n);
    head2 = NULL;
    for (i = 0; i < n; i++)
    {
        newnode2 = malloc(sizeof(struct node));
        scanf("%d", &newnode2->data);
        newnode2->link = 0;
        if (head2 == 0)
            head2 = temp2 = newnode2;
        else
        {
            temp2->link = newnode2;
            temp2 = newnode2;
        }
    }
    j = head1;
    while (j->link != NULL)
        j = j->link;
    j->link = head2;
    head2 = NULL;
    printf("Concatenated List is \n");
    j = head1;
    while (j != NULL)
    {
        printf("%d \t", j->data);
        j = j->link;
    }
    printf("\n");
}
int main()
{
    int choice, x, n, i;
    printf("1.Create or Push\n");
    printf("2.Pop\n");
    printf("3.Display\n");
    printf("4.Linear Search\n");
    printf("5.Data Concatenation\n");
    printf("6.Exit\n");
    while (1)
    {
        printf("Enter Your Choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter the number of elements\n");
            scanf("%d", &n);
            printf("Enter the elements :\n");
            for (i = 0; i < n; i++)
            {
                scanf("%d", &x);
                push(x);
            }
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
            linearsearch();
            break;
        }
        case 5:
        {
            dataconcatenation();
            break;
        }
        case 6:
        {
            exit(0);
        }
        default:
            printf("INVALID OPERATION\n");
        }
    }
}