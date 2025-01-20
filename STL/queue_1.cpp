#include<iostream>
#include<queue>

using namespace std;

void display_queue_front(queue<int> que)
{
    while(que.size() !=0)
    {
        cout<<que.front()<< " ";
        que.pop();
    }    
    cout<<endl;
}


void display_queue_back(queue<int> que)
{   
    while(que.empty() ==0)
    {
        cout<<que.back()<< " ";
        que.pop();
    }    
    cout<<endl;
}

int main()
{
    queue<int> que_1;

    que_1.push(4);
    que_1.push(6);
    que_1.push(9);

    display_queue_front(que_1);
    display_queue_back(que_1);
    return 0;
}