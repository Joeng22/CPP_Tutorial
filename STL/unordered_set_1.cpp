#include<iostream>
#include<unordered_set>
#include<bits/stdc++.h>

using namespace std;

void display_set(unordered_set<int> set_1)
{
    for(auto a:set_1)
    {
        cout<<a<<" ";
    }
    cout<<endl;
}

int main()
{
    unordered_set<int> set_1;
    unordered_set<int> set_2 = {11,22,33,44,55,66};

    set_1.insert(2);
    set_1.insert(9);
    set_1.insert(4);
    set_1.insert(7);

    set_1.insert(2);
    

    display_set(set_1);


    /* Eraser one element in a set*/
    set_1.erase(4);
    display_set(set_1);

    set_1.insert(4);
    display_set(set_1);
    unordered_set<int>::iterator itr;
    itr = set_1.begin();
    advance(itr,2);
    set_1.erase(itr);
    display_set(set_1);


    cout<<*find(set_1.begin(),set_1.end(),4)<<endl;



    display_set(set_2);
    display_set(set_1);

    set_1.swap(set_2);
    
    display_set(set_2);
    display_set(set_1);
    return 0;
}