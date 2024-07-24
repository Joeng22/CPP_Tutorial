#include<iostream>
#include<map>
#include<list>
#include<queue>

using namespace std;

void bfs(int src,map<int,list<int>> ml)
{
    map<int,bool> visited;
    queue<int> q;

    q.push(src);
    visited[src] = true;

    while(!q.empty())
    {
        int node = q.front();
        cout<<endl;
        cout<<"node:"<<node<<endl;
        q.pop();
        for(int nbr:ml[node])
        {  
            cout<<"nbr:"<<nbr<<" "<<"visited:"<<visited[nbr];
            if(!visited[nbr]){
                q.push(nbr);
                visited[nbr]=true;
            }
        }
    }
}

int main()
{
    map<int,list<int>> ml;

    int N;
    cin>>N;

    int s,e;
    for(int i=0;i<N;i++)
    {
        cin>>s>>e;
        ml[s].push_back(e);
        ml[e].push_back(s);
    }

    bfs(0,ml);

    return 0;
    
}