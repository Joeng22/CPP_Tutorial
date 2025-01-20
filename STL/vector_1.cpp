/*
Vector tutorial
Standard vector operations
*/


#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

void display_vector(vector <int> vect_1)
{
    cout<<"size of vector : "<< vect_1.size()<<endl;
    for(auto x : vect_1)
    {
        cout<<x<<" " ;
    }
    cout<<endl;

    vector<int>::iterator itr;
    /*Traverse using iterator*/
    for(itr=vect_1.begin();itr!=vect_1.end();itr++)
    {
        cout<<*itr<<" " ;
    }
    cout<<endl;

    /*Traverse using index*/
    for(int i=0;i<vect_1.size();i++)
    {
        cout<<vect_1[i]<<" ";
    }

    cout<<endl;
    /*Traverse with index*/
    for(int i=0;i<vect_1.size();i++)
    {
        cout<<vect_1.at(i)<<" ";
    }
    cout<<endl;
}

int main()
{
    vector <int> vect_1;
    
    /* pushing element to the end */
    vect_1.push_back(1);
    vect_1.push_back(2);
    vect_1.push_back(3);

    display_vector(vect_1);

    /*Deleting element at a particular index */
    int index = 1;
    vect_1.erase(vect_1.begin()+index);
    display_vector(vect_1);

    /* deleting particular element*/
    vect_1.push_back(7);
    vect_1.push_back(8);
    display_vector(vect_1);

    vect_1.erase(find(vect_1.begin(),vect_1.end(),8));    // find will return corresponding address or itr of the 3rd argument 
    display_vector(vect_1);

    /*replace element to a particular index with the new element */
    vect_1[1] = 5;
    display_vector(vect_1);

    /*inserting using insert method*/
    vect_1.insert(vect_1.begin()+1,4);
    display_vector(vect_1);



    /*
    vector insert
    index = 3;
    vect_1.insert(vect_1.begin()+index,99);  // 99 will inserted at index "index"


    find functor
    find(vect_1.begin(),vect_1.end(),4); --> find will find value 4, between vect_1.begin() and  vect_1.end() and return index    
    */
    return 0;
}