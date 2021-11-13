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
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            scanf("%d",&mat[i][j]);
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
    for(k = 0; k < N; k++){
        for(i = 0; i < N; i++){
            for(j = 0; j < N; j++){
                /*
                if(mat[i][k]!=0&&mat[k][j]!=0&&mat[j][k]!=0&&mat[k][i]!=0){
                    mat[i][j] = min(mat[i][j],mat[i][k]+mat[k][j]);
                    mat[j][i] = min(mat[j][i], mat[k][i]+mat[j][k]);
                 }
                 */
                 if(mat[i][k]+mat[k][j]<mat[i][j]&&mat[i][j]!=0){
                    mat[i][j] = mat[i][k]+mat[k][j];
                 }
                 
                 if(mat[k][i]+mat[j][k]<mat[j][i]&&mat[j][i]!=0){
                    mat[j][i] = mat[k][i]+mat[j][k];
                 }
                 
            }
        }
    }
     printf("%d", mat[start][end]);
     //printf("%d", mat[end][start]);
    
}