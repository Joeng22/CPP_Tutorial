/*
Graph is a non-linear data structure consisting of vertices and edges
Vertices/Nodes: Every node/vertex can be labeled or unlabelled.
Edges: Edges are drawn or used to connect two nodes of the graph. It can be ordered pair of nodes in a directed graph. Edges can connect any two nodes in any possible way. 
There are no rules. Sometimes, edges are also known as arcs. Every edge can be labelled/unlabelled.


Note : Adjacency Matrix Representation of Graph Data Structure, it should be symmetric matrix

*/


#include<iostream>
#include<vector>

using namespace std;

void addEdge(vector<vector<int>> &mat, int i, int j)
{
    mat[i][j] = 1;
    mat[j][i] = 1;
}

void display_graph(vector<vector<int>> mat)
{
    for(int i=0;i<mat.size();i++)
    {
        for(int j=0;j<mat.size();j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

}


int main()
{
    int V = 4;
    vector<vector<int>> mat(V, vector<int>(V, 0));  // 2D vector of 4 rows , and each row contain 1D vector of 4 elements, initialized with 0

    addEdge(mat, 0, 1);
    addEdge(mat, 0, 2);
    addEdge(mat, 1, 2);
    addEdge(mat, 2, 3);

    display_graph(mat);
    return 0;
}