#include<iostream>
#include<unordered_map>

using namespace std;

void display_unmap(unordered_map<int,int> unmap_1)
{
 
    for(auto a:unmap_1)
    {
        cout<<a.first<<" --> "<< a.second<<endl;;
    }
    cout<<endl;


   /*
   for(int i=0;i<unmap_1.size();i++)
   {
       cout<<unmap_1[i].first<<"-->"<<unmap_1[i].second<<endl;;
   }
   */
   cout<<endl;
}

int main()
{
    unordered_map<int,int> unmap_1;

    unmap_1[5] = 10;
    unmap_1[1] = 8;
    unmap_1[9] = 9;

    display_unmap(unmap_1);
    return 0;
}