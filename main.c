//
// Created by Shaked Levi on 12/11/2021.
//

#include <stdio.h>
#include "my_mat.h"

int main(){

    int num = 0;
    char x;
    int i = 0;
    int j = 0;
    
    while(x!='D'){
        scanf("%c", &x); //insert a wanted function to implement.
        if(x == 'A'){ //generate a matrix.
            printf("Loading variables to matrix...\n");
            for(int i = 0; i<=1; i++){
                for(int j = 0; j<=1; j++){
                    mat[i][j] = scanf("%d",&num);
                    printf("the number u picked is: \n %d", num);
                }
            }
        }
         if(x == 'B'){ // finds if there's a route between i,j
            scanf("%d",&i);
            scanf("%d",&j);
        }
         if(x == 'C'){ // finds the closest route between i,j
            scanf("%d",&i);
            scanf("%d",&j);
        }
        if(x == 'D'){
            printf("Exiting program...\n");
        }
    }
}