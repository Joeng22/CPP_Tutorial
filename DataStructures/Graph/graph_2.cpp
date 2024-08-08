/*
Adjacency List Representation of Graph:
This graph is represented as a collection of linked lists. There is an array of pointer which points to the edges connected to that vertex. 

*/


#include<iostream>
#include<vector>

using namespace std;

void addEdge(vector<vector<int>> &mat, int i, int j)
{
    mat[i].push_back(j);
    mat[j].push_back(i);
}

void display_graph(vector<vector<int>> mat)
{
    for(int i=0;i<mat.size();i++)
    {
        cout<<i<<" :";
        for(auto j:mat[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

}


int main()
{
    int V = 4;  // Number of nodes
    vector<vector<int>> mat(V);  // 2D vector of 4 rows , and each row contain 1D vector of 4 elements, initialized with 0

    addEdge(mat, 0, 1);
    addEdge(mat, 0, 2);
    addEdge(mat, 1, 2);
    addEdge(mat, 2, 3);

    display_graph(mat);
    return 0;
}