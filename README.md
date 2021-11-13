# Shortest path finder - Assignment[2] 

> Made by Shaked Levi.

>Shaked's github https://github.com/20shaked20

### Introduction
This repository is part of an assigment in 'C' programming course at Ariel University.
>
The project is about finding the shortest path between given two indexs of an undirected graph.

## The algorithm:
The algorithm i used is "Floyd Warshall algorithm" with has time complexity of o(n^3).
>
This algorithm is mostly used in directed graphs so i had to make some changes to it. i had to make sure to check the edges in both ways for each path available.
>
A single use of the algorithm will find the weights of shortest paths between all pairs of vertices, this way i can find the shortest path between (i,j).
>

>
## Testing:
Using the makefile, in the command line type "make all" it will automaticlly create an exectuable file.
>
in the command line type "./connections" and the program will start running.
>
#### Typing 'A' in command line - creating a matrix:
>
>start inserting numbers (100 numbers, as the size of the matrix is 10x10 in this project).
>
#### Typing 'B' in the command line - checks if there's a path available between (i,j):
>
>insert two numbers representing the required path u want to check.
>
#### Typing 'C' in the command line - finds the shortest path between (i,j):
>
>insert two numbers representing the required path u want to check.
>
#### Typing 'D' in the command line - will stop the program.
