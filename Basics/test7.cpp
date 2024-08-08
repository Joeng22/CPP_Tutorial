/*
2D vector tutorial in cpp

Declaration and initializtion of 2D vector
*/
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <vector <int>> vector_1;
    vector <vector<int>> vector_2(5);
    vector <vector<int>> vector_3(5,vector<int>(4));
    vector <vector<int>> vector_4(5,vector<int>(4,1));
    vector <vector<int>> vector_5 = {{5,2},{3,3,4},{5,6,7}};

    cout<<"size of vector_1:"<<vector_1.size()<<endl;
    cout<<"size of vector_2:"<<vector_2.size()<<"size of each element in vector_2:"<<vector_2[0].size()<<endl;
    cout<<"size of vector_3:"<<vector_3.size()<<"size of each element in vector_3:"<<vector_3[0].size()<<"Default value of [0][0] element in the vector_3:"<<vector_3[0][0]<<endl;
    cout<<"size of vector_4:"<<vector_4.size()<<"size of each element in vector_4:"<<vector_4[0].size()<<"Default value of [0][0] element in the vector_4:"<<vector_4[0][0]<<endl;
    cout<<"size of vector_5:"<<vector_5.size()<<"size of each element in vector_5:"<<vector_5[0].size()<<"Default value of [0][0] element in the vector_5:"<<vector_5[0][0]<<endl;
    return 0;

}