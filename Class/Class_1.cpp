/*
Cpp class tutorial
Create a stack using class and vector 
Supported operation:
Get size
Is_empty
Push
Pop
Top
*/

/*
Notes:

 Unless specified, the default access specifier in C++ is private
*/
#include<iostream>
#include<vector>

using namespace std;

class Stack
{
    vector <int> vect_1;
public:
    bool Is_empty()
    {
        if(vect_1.size() == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
       
    }
    int Get_size()
    {
        return vect_1.size();
    }

    void Push(int x)
    {
        vect_1.push_back(x);
    }

    int Pop()
    {
        int temp = vect_1[vect_1.size()-1];
        vect_1.pop_back();
        return temp;
    }

    int Top()
    {
        if(vect_1.size() != 0)
        {
            return vect_1[0];
        }
        else
        {
            return -1;
        }
    }


    void Display_Elements()
    {

        for(int i=0;i<vect_1.size();i++)
        {
            cout<<vect_1[i]<<" ";
        }

        cout<<endl;
    }

};

int main()
{

    Stack stk1;
    cout<<"IS empty:"<<stk1.Is_empty()<<endl;

    stk1.Push(1);
    stk1.Push(2);
    stk1.Push(7);
    stk1.Push(8);
    stk1.Push(11);
    stk1.Push(22);

    cout<<"Get size:"<<stk1.Get_size()<<endl;

    cout<<"Top:"<<stk1.Top()<<endl;
    cout<<"Display_Elements :";
    stk1.Display_Elements();
    cout<<"Pop:"<<stk1.Pop()<<endl;

    cout<<"Get size:"<<stk1.Get_size()<<endl;
    cout<<"Display_Elements ";
    stk1.Display_Elements();

    return 0;
}

