#include <stdio.h>

int G[10][10], visited[10], n;

void DFS(int i)
{
    printf("\n%d", i);
    visited[i] = 1;
    for (int j = 0; j < n; j++)
        if (!visited[j] && G[i][j] == 1)
            DFS(j);
}

void main()
{
    int i, j;
    printf("Enter number of vertices:");
    scanf("%d", &n);
    // read the adjecency matrix
    printf("\nEnter adjecency matrix of the graph:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &G[i][j]);
    // visited is initialized to zero
    for (i = 0; i < n; i++)
        visited[i] = 0;
    DFS(0);
}
