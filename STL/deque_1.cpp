#include<iostream>
#include<deque>
#include<bits/stdc++.h>

using namespace std;

void display_deque(deque<int> deque_1)
{
    cout<<"Display Deque auto "<<endl;
    for(auto a:deque_1)
    {
        cout<<a<<" " ;
    }
    cout<<endl;

    cout<<"Traverse using iterator "<<endl;
    deque<int> :: iterator itr;
    for(itr=deque_1.begin();itr!=deque_1.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;


}

int main()
{
    deque <int> deq_1;

    deq_1.push_front(4);
    deq_1.push_back(5);
    deq_1.push_front(8);
    deq_1.push_front(9);
    display_deque(deq_1);

    /* Change value at a particular index*/
    deq_1[3] = 7;
    display_deque(deq_1);

    /* Delete element at a particular index */
    int index = 2;
    deq_1.erase(deq_1.begin()+2);
    display_deque(deq_1);


    deq_1.push_back(2);
    deq_1.push_back(3);
    display_deque(deq_1);

    /*Delete a particular element */
    int remove_element = 7;
    deq_1.erase(find(deq_1.begin(),deq_1.end(),7));
    display_deque(deq_1);

    /*Insert element at a particular location */
    deq_1.insert(deq_1.begin()+1,1);
    display_deque(deq_1);

    /* Deque pop */
    deq_1.pop_front();
    display_deque(deq_1);

    deq_1.pop_back();
    display_deque(deq_1);

    /* Deque front and back */
    cout<<deq_1.front()<<endl;
    cout<<deq_1.back()<<endl;
    return 0;
}