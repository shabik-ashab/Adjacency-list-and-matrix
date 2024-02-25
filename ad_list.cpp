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
    vector<int>adj_list[nodes];

    adj_list[0] = {1};
    adj_list[1] = {0,2,3};
    adj_list[2] = {1,3};
    adj_list[3] = {1,2};

    
    for (int i = 0; i < nodes; i++)
    {
        cout<<i<<"->";
        for (int j = 0; j < adj_list[i].size(); j++)
        {
            cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}