#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int create(int);
void linear_prob(int[], int, int);
void display(int[]);
int main()
{
    int num, key, i, a[MAX];
    int ans = 1;
    for (i = 0; i < MAX; i++)
    {
        a[i] = -1;
    }
    do
    {
        printf("\n enter the data");
        scanf("%d", &num);
        key = create(num);
        linear_prob(a, key, num);
        printf("\n do you wish to continue?(1/0)");
        scanf("%d", &ans);
    } while (ans);
    display(a);
}
int create(int num)
{
    int key;
    key = num % 100;
    return key;
}
void linear_prob(int a[MAX], int key, int num)
{
    int flag, i, count = 0;
    flag = 0;
    if (a[key] == -1)
    {
        a[key] = num;
    }
    else
    {
        printf("\n collision detected!\n");
        i = 0;
        while (i < MAX)
        {
            if (a[i] != -1)
                count++;
            i++;
        }
        printf("collision avoided successfully using probing\n");
        if (count == MAX)
        {
            printf("\n hash table is full");
            display(a);
            exit(1);
        }
        for (i = key + 1; i < MAX; i++)
            if (a[i] == -1)
            {
                a[i] = num;
                flag = 1;
                break;
            }
        i = 0;
        while ((i < key) && (flag == 0))
        {
            if (a[i] == -1)
            {
                a[i] = num;
                flag = 1;
                break;
            }
            i++;
        }
    }
}
void display(int a[MAX])
{
    int i, choice;
    printf("1.display ALL\n.2.filtered display\n");
    printf("enter choice\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\n complete hash table is\n");
        printf("key\t value");
        for (i = 0; i < MAX; i++)
            printf("\n %d\t %d", i, a[i]);
        break;
    case 2:
        printf("\n filtered hash table is\n");
        printf("key\t value");
        for (i = 0; i < MAX; i++)
            if (a[i] != -1)
            {
                printf("\n %d\t %d", i, a[i]);
                continue;
            }
        break;
    }
}