#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;

void display_set(set<int> set_1)
{
    cout<<"Iterate throught set with auto"<<endl;
    for(auto a:set_1)
    {
        cout<<a<<" ";
    }
    cout<<endl;


    cout<<"Iterate through set with iterator"<<endl;
    set<int>::iterator itr;
    for(itr=set_1.begin();itr!=set_1.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;


    /*
    cout<<"Iterate through index :"<<endl;
    for(int i=0;i<set_1.size();i++)
    {
        cout<<set_1[i]<<" ";   [] --> operator not supported
    }
    cout<<endl;
    */

}

int main()
{
    set<int> set_1;
    set_1.insert(4);
    set_1.insert(8);
    set_1.insert(9);
    set_1.insert(2);
    
    
    display_set(set_1);


    /*Insert particular element at a particular index with iterator*/
    set<int>::iterator itr_1;
    itr_1=set_1.begin();
    advance(itr_1,1);
    set_1.insert(itr_1,7);

    display_set(set_1);

    set_1.insert(1);
    display_set(set_1);



    /*Delete*/
    /*Erase a particular index element */
    set_1.erase(set_1.begin());
    display_set(set_1);

    /*Erase iterator + index element */
    set_1.insert(1);
    itr_1=set_1.begin();
    advance(itr_1,2);
    set_1.erase(itr_1);
    display_set(set_1);    

    /*Erase a particular element*/
    set_1.insert(4);
    set_1.erase(8);
    display_set(set_1);
    
    
    cout<<"value at the address :" << *find(set_1.begin(),set_1.end(),4)<<endl;
    
    return 0;




}