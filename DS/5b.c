#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    unsigned int ph;
    int sem;
    char name[15],usn[15],branch[8];
    struct student *next;
};
struct student *front=0,*rear=0;
void enque(unsigned int n,int s,char na[20],char u[15],char b[5])
{
    struct student *newnode =(struct student*)malloc(sizeof(struct student));
    newnode->ph=n;
    newnode->sem=s;
    strcpy(newnode->name,na);
    strcpy(newnode->usn,u);
    strcpy(newnode->branch,b);
    newnode->next=0;
    if(front==0 && rear==0)
    front=rear=newnode;
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void deque()
{
    struct student *temp;
    temp=front;
    if(front==0)
    printf("Underflow\n");
    else
    {
        printf("Deleted Node is :\n");
        printf("Name : %s\nUSN : %s\nBranch:%s\nSem : %d\nPhone Number : %i\n",
        temp->name,temp->usn,temp->branch,temp->sem,temp->ph);
        front=front->next;
        free(temp);
    }
}
void display()
{
    struct student *temp;
    if(front==0 && rear==0)
    printf("Queue is Empty");
    else
    {
        temp=front;
        while(temp!=NULL)
        {
             printf("Name : %s\nUSN : %s\nBranch:%s\nSem : %d\nPhone Number : %i\n",
            temp->name,temp->usn,temp->branch,temp->sem,temp->ph);
            temp=temp->next;
        }
    }
}
int main()
{
    int choice;
    unsigned int ph;
    int sem;
    char name[20],usn[15],branch[5];
    while(1)
    {   
        printf("1.Enque\n");
        printf("2.Deque\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter Your Choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:{
                printf("Enter the Name, USN, Branch, Semister, Phone Number of the student respectively\n");
                scanf("%s%s%s%d%i",name,usn,branch,&sem,&ph);
                enque(ph,sem,name,usn,branch);
                break;
            }
            case 2:{
                deque();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:exit(0);
            default:printf("Invalid Choice\n");
        }
    }
}