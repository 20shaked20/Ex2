//
// Created by Shaked Levi on 12/11/2021.
//
#include <stdio.h>
#include "my_mat.h"
#define N 10
#define TRUE 1
#define FALSE -1
int mat[N][N];

int min(int a,int b){
    if(a>b){
        return b;
    }
    return a;
}

void get_variables(){
    int num = 0;
    for(int i = 0; i<=10; i++){
        for(int j = 0; j<=10; j++){
            mat[i][j] = scanf("%d",&num);
        }
    }
}
/*
int route_exists(int start, int end){
    
}
*/
void shortest_route(int start, int end){
   int k,i,j;
    //if(route_exists(i,j)==1) {  //hence true
    for(k = 1; k<=N; k++){
        for(i = start; i<=N; i++){
            for(j = end; j<=N; j++){
                mat[i][j] = min(mat[i][j],mat[i][k]+mat[k][j]);
                printf("%d", mat[i][j]);
            }
        }
    }
    
}