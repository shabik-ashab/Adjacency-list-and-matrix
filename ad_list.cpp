#include <bits/stdc++.h>
using namespace std;


/*
    graph representation
    ====================

    Topic: Adjacency list -> linked list, c++ vector

    0 -----1
          /  \ 
         2---3 

    # total nodes = 4
    # total edge = 4
    # undirected, unweighted

    0 -> 1
    1 -> 0,2,3
    2 -> 1,3
    3 -> 1,2

    # complete graph 
    # maximum num of edge in a graph -> node x node
*/

// time complexity -> O(n^2)
// space complexity -> O(n^2)

int main()
{
    int nodes = 4;
    
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