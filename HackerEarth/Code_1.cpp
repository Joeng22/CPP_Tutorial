#include<iostream>

using namespace std;

void display(int *A,int N)
{
    for(int i=0;i<N;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void swap(int *A,int i,int j)
{
    int temp;
    temp = A[i];
    for(int k=0;k<=j;k++)
    {
        A[k] = A[k+1];
    }
    A[j] = temp;


}

void Permutate(int *A,int index,int N)
{
    swap(A,0,index);
    display(A,N);
    swap(A,0,index);
}


int main()
{
    int A[4] = {3,2,1,4};
    int B[4] = {1,2,3,4};

    int N=4;
    display(A,N);
    for(int i=1;i<N;i++)
    {
        Permutate(A,i,N);
    }

    return 0;
}