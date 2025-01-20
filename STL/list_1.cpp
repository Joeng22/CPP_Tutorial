#include<iostream>
#include<list>
#include<bits/stdc++.h>

using namespace std;
/* Common operations in list
front() – Returns the value of the first element in the list.
back() – Returns the value of the last element in the list.
push_front() – Adds a new element ‘g’ at the beginning of the list.
push_back() – Adds a new element ‘g’ at the end of the list.
pop_front() – Removes the first element of the list, and reduces the size of the list by 1.
pop_back() – Removes the last element of the list, and reduces the size of the list by 1.
insert() – Inserts new elements in the list before the element at a specified position.
size() – Returns the number of elements in the list.
begin() – begin() function returns an iterator pointing to the first element of the list.
end() – end() function returns an iterator pointing to the theoretical last element which follows the last element.
*/
void display_list(list<int> list_1)
{
    /* Traverse auto*/
    list<int> list_2;
    list_2 = list_1;
    for(auto a:list_1)
    {
        cout<<a<<" ";
    }
    cout<<endl;

    list<int>::iterator itr;
    for(itr=list_1.begin();itr!=list_1.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;

    while(list_1.empty()==0)
    {
        cout<<list_1.front()<<" ";
        list_1.pop_front();
    }
    cout<<endl;


    while(list_2.empty() == 0)
    {
        cout<<list_2.front()<<" ";
        list_2.pop_back();
    }
    cout<<endl;
    /*
    for(int i=0;i<list_1.size();i++)
    {
        cout<<list_1[i]<< " ";
    }
    cout<<endl;
    */
}

int main()
{
    list <int> list_1;
    list_1.push_back(2);
    list_1.push_front(3);
    list_1.push_back(4);
    list_1.push_front(6);

    display_list(list_1);


    /* replace element at a particular index*/
    //int index=2;
    //list_1[index] = 7;
    //list_1.emplace(list_1.begin() ,7);
    //display_list(list_1);


    /* Insert a new element at an index and pushing existing elements*/
    int index =2;
    list<int>:: iterator itr;
    itr=list_1.begin();
    advance(itr,index);
    list_1.insert(itr,7);
    display_list(list_1);

    /* Replace element at an idnex*/
    index=3;
    itr = list_1.begin();
    //itr++;
    advance(itr,3);
    //itr = itr+1;
    *itr = 9;
    display_list(list_1);


    /* Erase at an index*/
    index=3;
    itr=list_1.begin();
    advance(itr,index);
    list_1.erase(itr);
    display_list(list_1);


    /* Erase by finding a particular element*/
    list_1.push_back(4);
    list_1.push_front(4);
    display_list(list_1);
    int element = 4;
    list_1.erase(find(list_1.begin(),list_1.end(),element));
    display_list(list_1);


    list_1.pop_front();
    display_list(list_1);
    
    list_1.pop_back();
    display_list(list_1);


    list_1.push_back(8);
    list_1.push_front(2);
    display_list(list_1);

    /*Sort the list */
    list_1.sort();
    display_list(list_1);

    list_1.push_front(2);
    display_list(list_1);


    /*get only unique elements*/
    list_1.unique();
    display_list(list_1);

    /*Merge 2 list*/
    list<int> list_2 = {33,22,33,2};
    display_list(list_2);

    list_2.merge(list_1);
    display_list(list_2);

    return 0;
}