//
// Created by Shaked Levi on 12/11/2021.
//
#ifndef EX_2_MY_MAT_H
#define EX_2_MY_MAT_H

extern int mat[10][10]; //defining the mat im going to use.

/* Starting this function is implemented by enterting string - 'A'
     * getting the variables & inits the matrix NxN, in our case the matrix is 10x10.
     */
void get_variables();

/* Starting this function is implemented by enterting string - 'B'
     *getting two integer variables - i,j
     * i - starting location of route
     * j - ending location of route
     * the function will print True if a route exists and False if not.
     */
int route_exists(int i, int j);

/* Starting this function is implemented by enterting string - 'C'
     *getting two integer variables - i,j
     * i - starting location of route
     * j - ending location of route
     * the function will print the shortest route. (already checked if route exists..)
     */
void shortest_route(int i, int j);

/* This is an implemetion of flyod_algo to suit our Assignemnet:
*/
void floyd_algo()
/*
     * Ending this program is implemented by enterting string - 'D'
     */

#endif //EX_2 MY_MAT_H
