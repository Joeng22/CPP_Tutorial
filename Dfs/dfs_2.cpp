//Number of Islands
//Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.
//An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

#include<iostream>

using namespace std;

void display_array(int arr1[][30],int row,int col)
{
    cout<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}

int island_count = 0;

void dfs(int map[][30],bool vis[][30],int cx,int cy,int row,int col)
{
    //cout<<"cx:"<<cx<<" cy:"<<cy<<" map[cx][cy]"<<map[cx][cy]<<" island_count:"<<island_count<<" map[cx][cy]:"<<map[cx][cy]<<endl;
    if(map[cx][cy]==0)
    {
        return;
    }
    else
    {
        if(map[cx+1][cy]== 1 && vis[cx+1][cy]==0 && cx+1<row)
        {
            vis[cx+1][cy]=1;
            dfs(map,vis,cx+1,cy,row,col);
        }
        if(map[cx][cy+1]== 1 && vis[cx][cy+1]==0 && cy+1<col)
        {
            vis[cx][cy+1]=1;
            dfs(map,vis,cx,cy+1,row,col);
        }
        if(map[cx-1][cy]== 1 && vis[cx-1][cy]==0 && cx-1>=0)
        {
            vis[cx-1][cy]=1;
            dfs(map,vis,cx-1,cy,row,col);
        }
        if(map[cx][cy-1]== 1 && vis[cx][cy-1]==0 && cy-1>=0)
        {
            vis[cx][cy-1]=1;
            dfs(map,vis,cx,cy-1,row,col);
        }

    }
}


int main()
{
    int row,col;
    cin>>row>>col;

    int map[30][30]={0};
    bool vis[30][30]={0};
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>map[i][j];
        }
    }
    display_array(map,row,col);

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(vis[i][j] == 0 && map[i][j]==1)
            {
                vis[i][j]=1;
                dfs(map,vis,i,j,row,col);
                island_count++;
            }
            else
            {
                continue;
            }
            
        }
    }
    cout<<"No of islands:"<<island_count<<endl;
    return 0;
}