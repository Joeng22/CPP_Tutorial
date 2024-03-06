#include<iostream>
#include<vector>

using namespace std;

void vector_display(vector<int> v1)
{
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
}

void vector_display_1(vector<int> v1)
{
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;    
}


int main()
{
    vector<int> vect_1;

    int t;
    cout<<"Enter No. of test case:"<<endl;
    cin>>t;
    int temp;
    for(int i=0;i<t;i++)
    {
        cin>>temp;
        vect_1.push_back(temp);
    }
    vector_display(vect_1);
    vector_display_1(vect_1);
    return 0;
}