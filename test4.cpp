//Permutation

#include<iostream>

using namespace std;

void display(int *arr1,int N)
{
    for(int i=0;i<N;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}

void shuffle(int *a,int i,int index)
{
    int temp;
    temp = a[index];
    a[index]= a[i];
    a[i]= temp;
}

void permutate(int *a,int index,int N)
{
    if(index == N-1)
    {
        display(a,N);
    }
    else
    {
        for(int i=index;i<N;i++)
        {
            shuffle(a,i,index);
            permutate(a,index+1,N);
            shuffle(a,i,index);
        }

    }


}


int main()
{

    int N; // Number of elements
    int t; //Number of test case

    cout<<"Enter no of test case:"<<endl;
    cin>>t;

    for(int j=0; j<t;j++)
    {
        cout<<"Enter no of elements"<<endl;;
        cin>>N;
        int a[N];

        for(int i=0;i<N;i++)
        {
            cin>>a[i];

        }

        display(a,N);

        permutate(a,0,N);
    }


    return 0;
}