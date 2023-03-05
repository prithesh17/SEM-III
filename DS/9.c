#include <stdio.h>
#include <stdlib.h>
int a[20][20], q[20], visited[20], reach[10], n, i, j, f = 0, r = -1, count = 0;
void bfs(int v)
{
    for (i = 1; i <= n; i++)
        if (a[v][i] && !visited[i])
            q[++r] = i;
    if (f <= r)
    {
        visited[q[f]] = 1;
        bfs(q[f++]);
    }
}
void dfs(int v)
{
    int i;
    reach[v] = 1;
    for (i = 1; i <= n; i++)
    {
        if (a[v][i] && !reach[i])
        {
            printf("\n%d->%d", v, i);
            count++;
            dfs(i);
        }
    }
}
int main()
{
    int v, choice;
    printf("\n Enter the number of vertices:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        q[i] = 0;
        visited[i] = 0;
    }
    for (i = 1; i <= n - 1; i++)
        reach[i] = 0;
    printf("\n Enter graph data in matrix form:\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    printf("1.bfs\n2.dfs\n3.exit\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("enter the starting vertex:");
        scanf("%d", &v);
        bfs(v);
        if ((v < 1) || (v > n))
        {
            printf("\nbfs is not possible");
        }
        else
        {
            printf("\nThe nodes which are reachable from %d:\n", v);
            for (i = 1; i <= n; i++)
            {
                if (visited[i])
                    printf("%d\n", i);
            }
        }
        break;
    case 2:
        dfs(1);
        if (count == n - 1)
            printf("\nGraph is connected");
        else
            printf("\nGraph is not connected");
        break;
    case 3:
        exit(0);
    }
}