//
// Created by Shaked Levi on 12/11/2021.
//
#include <stdio.h>
#include "my_mat.h"
#define N 10
#define TRUE 1
#define FALSE -1
int mat[N][N];

int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    return a;
}

void get_variables()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

int route_exists(int start, int end)
{
    if (mat[start][end] != 0)
    {
        return TRUE;
    }
    return FALSE;
}


void shortest_route(int start, int end)
{
    int k = 0, i = 0, j = 0;
        for (k = 0; k < N; k++)
        {
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                {
                    if (mat[i][k] != 0 && mat[k][j] != 0 && mat[j][k] != 0 && mat[k][i] != 0)
                    {
                        // the trick was to use in both ways the floyd algorithm, because it's an undirected graph.
                        mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
                        mat[j][i] = min(mat[j][i], mat[k][i] + mat[j][k]);
                    }
                }
            }
        }
        if (route_exists(start, end) == TRUE) {
        printf("%d", mat[start][end]); //prints the shortest route.
        }
    else
    {
        printf("-1");
    }
}

