/*
Vector tutorial
*/

#include<iostream>
#include<vector>

using namespace std;

void imwrite()
{
    cout<<"Inside imwrite"<<endl;
}
int main()
{
    cout<<"Hello World"<<endl;

    //Declear vector variable
    vector <int> vect_1;
    vector <int> vect_2 = {1,2,3,4,5};

    cout<<vect_1.size()<<endl;  // Get size of vector

    vect_1.push_back(1);  // add elements to vector
    cout<<vect_1.size()<<endl;


    //To iterate over the elements in the vector : Method-1
    for(int i=0;i<vect_1.size();i++)
    {
        cout<<vect_1[i]<<endl;
    }

    cout<<endl;

    //To iterate over the elements in the vector  : Method-1
    for(int i=0;i<vect_2.size();i++)
    {
        cout<<vect_2[i]<<endl;
    }

    cout<<endl;

    //To iterate over the elements in the vector : Method-2
    for(int i:vect_2)
    {
        cout<<i<<endl;
    }

    cout<<endl;

    //To iterate over the elements in the vector : Method-3
    for(int i=0;i<vect_2.size();i++)
    {
        cout<<vect_2.at(i)<<endl;
    }


    cout<<endl;

    vect_2.pop_back();  //Remove last element from the vector

    vect_2.insert(vect_2.begin()+2,99);  // Insert element to the vector


    for(int i=0;i<vect_2.size();i++)
    {
        cout<<vect_2.at(i)<<endl;
    }
    cout<<endl;

    cout<<vect_2.empty()<<endl;  // Check whether a vector is empty or not 




    //Iterate over the elements in the vector using iterator
    vector <int>:: iterator itr1;

    itr1 = vect_2.begin();   // itr1 point to the first location of vect_2
    cout<<"itr1:"<<*(itr1+2)<<endl;


    itr1 = vect_2.end()-1;  //itr1 point to the last location of vect_2
    cout<<"itr1:"<<*itr1<<endl;

    return 0;
}