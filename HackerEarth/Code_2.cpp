#include<iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;

    cout<<str;


    string str2 = "joe";
    string str3 = "l";
    int temp = str.find(str2);
    cout<<temp<<endl;

    temp = str.find(str3);
    cout<<temp<<endl;
    return 0;
}