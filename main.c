//
// Created by Shaked Levi on 12/11/2021.
//

#include <stdio.h>
#include "my_mat.h"

int main(){

    char x;
    int i = 0;
    int j = 0;
    
    while(x!='D'){
        scanf("%c", &x); //insert a wanted function to implement.
        if(x == 'A'){ //generate a matrix.
            printf("Loading variables to matrix...\n");
            get_variables();
            printf("\n");
        }
         if(x == 'B'){ // finds if there's a route between i,j
            printf("Locates if there's a route... \n");
            scanf("%d",&i);
            scanf("%d",&j);
            printf("\n");
        }
         if(x == 'C'){ // finds the closest route between i,j
            scanf("%d",&i);
            scanf("%d",&j);
            printf("Locates the shortest route... \n");
            shortest_route(i,j);
            printf("\n");
        }
        if(x == 'D'){
            printf("Exiting program...\n");
        }
    }
}