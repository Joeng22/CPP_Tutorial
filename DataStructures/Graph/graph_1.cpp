#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int V = 4;
    vector<vector<int >> g(V, vector<int >(V, 0));

    cout<<"Shape :"<<g.size()<<endl;
    return 0;
}