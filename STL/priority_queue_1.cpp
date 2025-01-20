#include<iostream>
#include<queue>

using namespace std;

void display_queue(priority_queue<int> prqueue)
{
    while(prqueue.empty()== 0)
    {
        cout<<prqueue.top()<<" ";
        prqueue.pop();
    }
    cout<<endl;

}

int main()
{
    priority_queue<int> priqueue_1;

    priqueue_1.push(3);
    priqueue_1.push(7);
    priqueue_1.push(2);
    priqueue_1.push(5);

    display_queue(priqueue_1);
    return 0;
}