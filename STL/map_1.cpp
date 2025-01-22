#include<iostream>
#include<map>

using namespace std;

void display_map(map<int,int> map_1)
{
    for(auto a:map_1)
    {
        cout<<a.first<<" --> "<< a.second<<endl;;
    }
    cout<<endl;
}

void display_map(map<string,int> map_1)
{
    for(auto a:map_1)
    {
        cout<<a.first<<" --> "<< a.second<<endl;;
    }
    cout<<endl;
}

void find_key(map<int,int> map_1,auto key)
{
    map<int,int> :: iterator itr;
    itr = map_1.find(key);
    if(itr!=map_1.end())
    {
        cout<<itr->first<<"-->"<<itr->second<<endl;
    }
    else
    {
        cout<<"Key not found"<<endl;
    }
}


void find_key(map<string,int> map_1,auto key)
{
    map<string,int> :: iterator itr;
    itr = map_1.find(key);
    if(itr!=map_1.end())
    {
        cout<<itr->first<<"-->"<<itr->second<<endl;
    }
    else
    {
        cout<<"Key not found"<<endl;
    }
}
int main()
{
    map<int,int> map_1;
    map_1[5] = 10;
    map_1[1] = 8;
    map_1[9] = 9;

    display_map(map_1);


    map<string,int> map_2;
    map_2["five"] = 10;
    map_2["one"] = 8;
    map_2["nine"] = 9;
    map_2["five"] = 11;

    display_map(map_2);

    find_key(map_1,5);
    find_key(map_1,10);

    find_key(map_2,"five");
    find_key(map_2,"ten");

    return 0;
}