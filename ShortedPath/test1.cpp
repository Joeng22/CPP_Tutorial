#include<iostream>
#include<map>

using namespace std;


void display_array(int arr1[][7],int N)
{
    cout<<endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}

int total_dist = 1;
int shortdist;
int temp_count;
void dfs(int plan[][7],bool vis[][7],int cur_x,int cur_y,int N,int dist,int next_value)
{
    if(plan[cur_x][cur_y]==next_value)
    {
       // cout<<"shortdist : "<<shortdist<<"temp_count:"<<temp_count<<endl;


        if(shortdist > dist)
        {
            shortdist = dist;
            temp_count=1;
        }
        else if(shortdist == dist)
        {
            temp_count++;
        }

        return;
    }
    else
    {
        if(plan[cur_x+1][cur_y]!=9 && vis[cur_x+1][cur_y]==0 && cur_x+1<N)
        {
            vis[cur_x+1][cur_y]=1;
            dfs(plan,vis,cur_x+1,cur_y,N,dist+1,next_value);
            vis[cur_x+1][cur_y]=0;
        }
        if(plan[cur_x][cur_y+1]!=9 && vis[cur_x][cur_y+1]==0 && cur_y+1<N)
        {
            vis[cur_x][cur_y+1]=1;
            dfs(plan,vis,cur_x,cur_y+1,N,dist+1,next_value);
            vis[cur_x][cur_y+1]=0;
        }
        if(plan[cur_x-1][cur_y]!=9 && vis[cur_x-1][cur_y]==0 && cur_x-1>=0)
        {
            vis[cur_x-1][cur_y]=1;
            dfs(plan,vis,cur_x-1,cur_y,N,dist+1,next_value);
            vis[cur_x-1][cur_y]=0;
        }
        if(plan[cur_x][cur_y-1]!=9 && vis[cur_x][cur_y-1]==0 && cur_y-1>=0)
        {
            vis[cur_x][cur_y-1]=1;
            dfs(plan,vis,cur_x,cur_y-1,N,dist+1,next_value);
            vis[cur_x][cur_y-1]=0;
        }


    }
}


int main()
{
    int T;
    cin>>T;

    int N,dst;
    for(int t=0;t<T;t++)
    {
        cin>>N;
        cin>>dst;
        int cur_x,cur_y;
        int plan[7][7] = {0};
        bool vis[7][7] = {0};
        map<int, pair<int,int>> mapped;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cin>>plan[i][j];
                if(plan[i][j] != 0 && plan[i][j] != 9)
                {
                    mapped[plan[i][j]] = {i,j};
                }
            }
        }

        display_array(plan,N);

        for(int i=1;i<dst;i++)
        {
            cur_x = mapped[i].first;
            cur_y = mapped[i].second;

            shortdist = 49;
            temp_count = 0;
            dfs(plan,vis,cur_x,cur_y,N,0,i+1);
            cout<<"shortdist:"<<shortdist<<endl;
            cout<<"temp_count :"<<temp_count<<endl;
            total_dist = total_dist * temp_count;

        }
    }
    cout<<"# "<<total_dist<<endl;

    return 0;
}