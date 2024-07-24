//Flood fill
/*

An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.
You are also given three integers sr, sc, and color. You should perform a flood fill on the image starting from the pixel image[sr][sc].
To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, 
plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. 
Replace the color of all of the aforementioned pixels with color.
Return the modified image after performing the flood fill.
*/
#include<iostream>


using namespace std;

void display_array(int array[][30],int N)
{
    cout<<endl;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}


void dfs_1(int Image[][30],bool vis[][30],int cur_x,int cur_y,int N,int pix_value,int put_value)
{
    Image[cur_x][cur_y]=put_value;

    if(cur_x+1<N && vis[cur_x+1][cur_y]==0 && Image[cur_x+1][cur_y]==pix_value)
    {
        dfs_1(Image,vis,cur_x+1,cur_y,N,pix_value,put_value);
    }
    if(cur_y+1<N && vis[cur_x][cur_y+1]==0 && Image[cur_x][cur_y+1]==pix_value)
    {
        dfs_1(Image,vis,cur_x,cur_y+1,N,pix_value,put_value);
    }    
    if(cur_x-1>=0 && vis[cur_x-1][cur_y]==0 && Image[cur_x-1][cur_y]==pix_value)
    {
        dfs_1(Image,vis,cur_x-1,cur_y,N,pix_value,put_value);
    } 
    if(cur_y-1>=0 && vis[cur_x][cur_y-1]==0 && Image[cur_x][cur_y-1]==pix_value)
    {
        dfs_1(Image,vis,cur_x,cur_y-1,N,pix_value,put_value);
    } 

    return;
}

int main()
{
    int N; // Image size NxN
    cin>>N;
    int Image[30][30] = {0};
    bool vis[30][30] = {0};

    int cur_x,cur_y;
    int pix_value = -1;
    int put_value = -1;

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>Image[i][j];
        }
    }

    cin>>cur_x>>cur_y;
    cin>>put_value;
    display_array(Image,N);

    vis[cur_x][cur_y] = 1;
    pix_value = Image[cur_x][cur_y];

    dfs_1(Image,vis,cur_x,cur_y,N,pix_value,put_value);
    display_array(Image,N);

    return 0;

}