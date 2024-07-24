/*
934. Shortest Bridge
Medium
Topics
Companies
You are given an n x n binary matrix grid where 1 represents land and 0 represents water.
An island is a 4-directionally connected group of 1's not connected to any other 1's. There are exactly two islands in grid.
You may change 0's to 1's to connect the two islands to form one island.
Return the smallest number of 0's you must flip to connect the two islands.

Brute force algorithm
*/

#include<iostream>

using namespace std;


void display_array(int arr[][100],int N)
{
    cout<<endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

void dfs(int arr[][100],int vis[][100],int cur_x,int cur_y,int N)
{
    if(arr[cur_x][cur_y] == 0)
    {
        return;
    }
    else
    {
        if(arr[cur_x+1][cur_y] == 1 && vis[cur_x+1][cur_y] == 0 && cur_x+1 < N )
        {
            vis[cur_x+1][cur_y] = 1;
            dfs(arr,vis,cur_x+1,cur_y,N);
        }

        if(arr[cur_x][cur_y+1] == 1 && vis[cur_x][cur_y+1] == 0 && cur_y+1 < N )
        {
            vis[cur_x][cur_y+1] = 1;
            dfs(arr,vis,cur_x,cur_y+1,N);
        }

        if(arr[cur_x-1][cur_y] == 1 && vis[cur_x-1][cur_y] == 0 && cur_x-1 >= 0 )
        {
            vis[cur_x-1][cur_y] = 1;
            dfs(arr,vis,cur_x-1,cur_y,N);
        }


        if(arr[cur_x][cur_y-1] == 1 && vis[cur_x][cur_y-1] == 0 && cur_y-1 >= 0 )
        {
            vis[cur_x][cur_y-1] = 1;
            dfs(arr,vis,cur_x,cur_y-1,N);
        }

    }
}


void dfs_2(int grid[][100],int vis[][100],int cur_x,int cur_y,int N,int dist,int &g_dist)
{
    //cout<<" cur_x:"<<cur_x<<" cur_y:"<<cur_y<<" N:"<<N<<" dist:"<<dist<<" g_dist:"<<g_dist<<endl;
    if(dist > g_dist)
    {
        return;
    }
    if(grid[cur_x][cur_y] == 1 &&  vis[cur_x][cur_y] == 1)
    {
        g_dist = min(g_dist,dist);
        return;
    }
    else
    {
        if( ( (grid[cur_x+1][cur_y]==0 && vis[cur_x+1][cur_y] == 0) || (grid[cur_x+1][cur_y] == 1 && vis[cur_x+1][cur_y] == 1) )  && (cur_x+1 <N) )
        {
            vis[cur_x+1][cur_y] = 1;
            dist++;
            dfs_2(grid,vis,cur_x+1,cur_y,N,dist,g_dist);
            dist--;
            if(grid[cur_x+1][cur_y]==0 )
                vis[cur_x+1][cur_y] = 0;
        }


        if( ( (grid[cur_x][cur_y+1]==0 && vis[cur_x][cur_y+1] == 0) || (grid[cur_x][cur_y+1] == 1 && vis[cur_x][cur_y+1] == 1) )  && (cur_y+1 <N) )
        {

            vis[cur_x][cur_y+1] = 1;
            dist++;
            dfs_2(grid,vis,cur_x,cur_y+1,N,dist,g_dist);
            dist--;
            if(grid[cur_x][cur_y+1]==0)
                vis[cur_x][cur_y+1] = 0;
        }

        if( ( (grid[cur_x-1][cur_y]==0 && vis[cur_x-1][cur_y] == 0) || (grid[cur_x-1][cur_y] == 1 && vis[cur_x-1][cur_y] == 1) )  && (cur_x-1 >=0) )
        {

            vis[cur_x-1][cur_y] = 1;
            dist++;
            dfs_2(grid,vis,cur_x-1,cur_y,N,dist,g_dist);
            dist--;
            if(grid[cur_x-1][cur_y]==0)
                vis[cur_x-1][cur_y] = 0;
        }

        if( ( (grid[cur_x][cur_y-1]==0 && vis[cur_x][cur_y-1] == 0) || (grid[cur_x][cur_y-1] == 1 && vis[cur_x][cur_y-1] == 1) )  && (cur_y-1 >=0) )
        {


            vis[cur_x][cur_y-1] = 1;
            dist++;
            dfs_2(grid,vis,cur_x,cur_y-1,N,dist,g_dist);
            dist--;
            if(grid[cur_x][cur_y-1]==0)
                vis[cur_x][cur_y-1] = 0;
        }

    }

}

int main()
{
    int N; // grid size
    cin >>N;
    int grid[100][100] = {0};
    int vis[100][100] = {0};
    int flag = 0;
    int cur_x=-1,cur_y=-1;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>grid[i][j]; 
            if(flag == 0)
            {
                if(grid[i][j] == 1)
                {
                    flag = 1;
                    cur_x = i;
                    cur_y = j;
                }
            }
        }
    }


    //display_array(grid,N);

    //display_array(vis,N);

    vis[cur_x][cur_y] = 1;
    dfs(grid,vis,cur_x,cur_y,N);

    //display_array(vis,N);




    int g_dist=99;
    int dist=0;
    for(int i=0;i<N ;i++)
    {
        for(int j=0;j<N ;j++)
        {
            if(grid[i][j] == 1 && vis[i][j] == 0)
            {
                dist = 0;
                cur_x = i;
                cur_y = j;
                //cout<<"cur_x:"<<cur_x<<"cur_y:"<<cur_y<<endl;
                dfs_2(grid,vis,cur_x,cur_y,N,dist,g_dist);
            }
        }
    }

    //display_array(vis,N);



    cout<<"Min dist:"<<g_dist-1<<endl;
    return 0;
}
