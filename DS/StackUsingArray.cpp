#include<iostream>

using namespace std;

class Stack
{
    private:
        int len;
        int *arr;
        int size1;
    public:
        Stack()
        {
            len=-1;
            size1 = 5;
            cout<<"size1:"<<size1<<endl;
            arr = new int[size1];
            for(int i=0;i<size1;i++)
            {
                //cout<<"i:"<<i<<endl;
                arr[i] = 0;
            }
        }


        Stack(int var)
        {
            len=-1;
            size1 = var;
            //cout<<"size1:"<<size1<<endl;
            arr=new int(size1);
            for(int i=0;i<size1;i++)
            {
                cout<<"i:"<<i<<" " <<arr[i]<<endl;
                //arr[i] = 0;
                //*(arr+i) = 0;
            }
        }


        ~Stack()
        {
            delete[] arr;
        }


        bool isempty()
        {
            if(len==-1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        bool isfull()
        {
            if(len==size1-1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        int size()
        {
            return size1;
        }

        void push(int var)
        {
            if(isfull())
            {
                cout<<"Stack overflow:"<<endl;
            }
            else
            {
                len++;
                arr[len] = var;
            }
        }
};

int main()
{
    //Stack *st1 = new Stack();
    Stack *st2 = new Stack(9);
    //Stack st3;
    Stack st4(10);

    //cout<<st1->sz<<endl;
    //cout<<"st1 size:"<<st1->size()<<endl;
    //cout<<"st2 size:"<<st2->size()<<endl;
    //cout<<"st3 siz3:"<<st3.size()<<endl;
    //cout<<"st4 size:"<<st4.size()<<endl;
    
    //cout<<"is full:"<<st4.isfull()<<endl;
    //cout<<"isempty"<<st4.isempty()<<endl;
    //st4.push(2);
    //cout<<"isempty"<<st4.isempty()<<endl;

    return 0;
}