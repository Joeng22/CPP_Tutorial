#include<iostream>
#include<stack>
#include<bits/stdc++.h>

using namespace std;
/*
LIFO
No. A stack is a data structure you should use when you are interested in placing elements on top and getting elements from the top. 
If you want an iterable stack, either use a different data structure for a stack role (std::vector?) or write one yourself.
*/
void display_stack(stack <int> stk)
{
    cout<<" Sizt :"<<stk.size()<<endl;
    while(stk.size() != 0)
    {
        cout<<stk.top()<< " ";
        stk.pop();
    }
    cout<<endl;
    /*
    Below won't work

    cout<<"Traverse auto "<<endl;
    for(auto& a:stk)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    */
   /*
   stack<int>::iterator itr;
   for(itr=stk.begin();itr!=stk.end();itr++)
   {
        cout<<*itr<<" "
   }
   cout<<endl;
   */
}

int main()
{
    stack <int> stk_1;
    stk_1.push(1);
    stk_1.push(9);
    stk_1.push(4);
    stk_1.push(5);

    display_stack(stk_1);
    display_stack(stk_1);

    return 0; 
}