//
// Created by Shaked Levi on 12/11/2021.
//

#include <stdio.h>
#include "my_mat.h"

int main()
{

    char x;
    int i = 0;
    int j = 0;
    int exists = 0;
    while (x != 'D')
    {
        scanf("%c", &x); //insert a wanted function to implement.
        if (x == 'A')
        { //generate a matrix.
            get_variables();
        }
        if (x == 'B')
        { // finds if there's a route between i,j
            scanf("%d", &i);
            scanf("%d", &j);
            exists = route_exists(i, j); // checks if there's a route.
            if (exists == 1)
            {
                printf("True \n");
            }
            else
            {
                printf("False \n");
            }
        }
        if (x == 'C')
        { // finds the closest route between i,j
            scanf("%d", &i);
            scanf("%d", &j);
            shortest_route(i, j);
            printf("\n");
        }
    }
    printf("\n");
}