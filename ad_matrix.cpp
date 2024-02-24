#include <bits/stdc++.h>
using namespace std;


/*
    graph representation
    ====================

    Topic: Adjacency matrix


    0 -----1
          /  \ 
         2---3 

    # total nodes = 4
    # total edge = 4
    # undirected, unweighted

    matrix(2d array) -> no of nodes(rows) x no of nodes(cols)
           -> 4 x 4

    marix[i][j] = 1
        if and only if (i -> j) node i to node j can go directly

    0 -> 1
    1 -> 0
    1 -> 2
    2 -> 1
    2 -> 3
    3 -> 2
    3 -> 1
    1 -> 3       

    # complete graph 
    # maximum num of edge in a graph -> node x node
*/

// time complexity -> O(n^2)
// space complexity -> O(n^2)

int main()
{
    int nodes = 4;
    // we need to initialized our matrix with 0
    int matrix[nodes][nodes] = {};

    matrix[0][1] = 1;
    matrix[1][0] = 1;

    matrix[1][2] = 1;
    matrix[2][1] = 1;

    matrix[2][3] = 1;
    matrix[3][2] = 1;

    matrix[3][1] = 1;
    matrix[1][3] = 1;

    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}