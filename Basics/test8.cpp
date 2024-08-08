/*
2D vector tutorial in cpp

Dynamically adding values to 2D vector
*/
#include<iostream>
#include<vector>

using namespace std;

void display_vector(vector<vector<int>> vect_1,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           cout<<vect_1[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int row = 5,col =4;

    // Case-1 Row and Columns already declared
    vector <vector<int>> vector_3(row,vector<int>(col));

    int count = 0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            vector_3[i][j] = count++;
        }
    }

    display_vector(vector_3,row,col);


    // Case-2 Row and Columns not declared , but declared at 2D vector
    row = 3, col = 4;
    vector<vector<int>> vector_1;
    count = 100;
    for(int i=0;i<row;i++)
    {
        vector<int> temp_vect;
        for(int j=0;j<col;j++)
        {
            temp_vect.push_back(count++);
        }
        vector_1.push_back(temp_vect);
    }   

    cout<<endl;
    display_vector(vector_1,row,col);



    // Case-2 Row and Columns not declared , type of vector not identified.
    /* Not possible*/
    /*
    error: could not convert ‘vector_2’ from ‘vector<int>’ to ‘vector<std::vector<int>>’ display_vector(vector_2,row,col);
    */
    /*
    row = 2, col = 2;
    vector<int> vector_2;
    count = 100;
    for(int i=0;i<row;i++)
    {
        vector<int> temp_vect;
        for(int j=0;j<col;j++)
        {
            temp_vect.push_back(count++);
        }
        vector_2.push_back(temp_vect);
    }   

    cout<<endl;
    display_vector(vector_2,row,col);

    */
    return 0;

}