//
// Created by Shaked Levi on 12/11/2021.
//
#include <stdio.h>
#include "my_mat.h"
#define N 10
#define TRUE 1
#define FALSE -1
int mat[N][N];
int mat_copy[N][N];

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
/// Private function to this file, makes a copy of a matrix ///
void make_copy()
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            mat_copy[i][j] = mat[i][j];
        }
    }
}

void shortest_route(int start, int end)
{
    int k = 0, i = 0, j = 0;
    make_copy(); // makes a copy of the mat so it wont overwrite it.
    if (route_exists(start, end) == TRUE)
    {
        for (k = 0; k < N; k++)
        {
            for (i = 0; i < N; i++)
            {
                for (j = 0; j < N; j++)
                {

                    if (mat_copy[i][k] != 0 && mat_copy[k][j] != 0 && mat_copy[j][k] != 0 && mat_copy[k][i] != 0)
                    {
                        // the trick was to use in both ways the floyd algorithm, because it's an undirected graph.
                        mat_copy[i][j] = min(mat_copy[i][j], mat_copy[i][k] + mat_copy[k][j]);
                        mat_copy[j][i] = min(mat_copy[j][i], mat_copy[k][i] + mat_copy[j][k]);
                    }
                }
            }
        }
        printf("%d", mat_copy[start][end]); //prints the shortest route.
    }
    else
    {
        printf("-1");
    }
}
