/*
String tutorial in cpp
Parse a string into sub-string with words in cpp without using any library
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class stock
{
    public:
        int CODE;
        string NAME;
        int PRICE;
};

void displayStock(vector<stock> stock_vector)
{
    for(int i =0;i<stock_vector.size();i++)
    {
        cout<<stock_vector[i].NAME<<" "<<stock_vector[i].CODE<<" " <<stock_vector[i].PRICE<<endl;
        cout<<endl;
    }
}


void ParseString(vector<stock> &stock_vector,string str)
{
    int CODE;  // flag = 1;
    string NAME;  // flag = 2;
    int PRICE;  // flag = 3;

    stock stk;

    int flag = 0;
    string sub_string = "";
    for(auto x:str)
    {
        if(x=='{'){

        }
        else if(x=='}')
        {

        }
        else if(x=='[')
        {
            
        }
        else if(x==']')
        {
            //cout<<"flag :"<<flag<<" sub_string 2:"<<sub_string<<endl;
            if(flag == 1)
            {
                CODE = stoi(sub_string);
            }
            else if(flag == 2)
            {
                NAME = sub_string;
            }
            else if(flag == 3)
            {
                PRICE = stoi(sub_string);
            }
            flag = 0;
            sub_string = "";
        }
        else if(x == ',')
        {

        }
        else if(x==':')
        {
            //cout<<"sub_string 1:"<<sub_string<<endl;
            if(sub_string == "CODE")
            {
                flag = 1;
            }
            else if(sub_string == "NAME")
            {
                flag = 2;
            }
            else if(sub_string == "PRICE")
            {
                flag = 3;
            }
            sub_string = "";
        }
        else
        {
            //cout<<x<<" ";
            sub_string = sub_string + x;
        }
    }
/*

    int CODE;  // flag = 1;
    string NAME;  // flag = 2;
    int PRICE;  // flag = 3;
*/
/*
    cout<<"CODE :"<<CODE<<endl;
    cout<<"Name :"<<NAME<<endl;
    cout<<"PRICE :"<<PRICE<<endl;
*/
    stk.CODE = CODE;
    stk.PRICE = PRICE;
    stk.NAME = NAME;

    stock_vector.push_back(stk);
    //cout<<endl;
    return ;
}

int main()
{
    vector<stock> stock_vector;

    ParseString(stock_vector,"{[CODE:1001],[NAME:Comp1],[PRICE:120]}");
    ParseString(stock_vector,"{[CODE:1002],[NAME:Comp2],[PRICE:130]}");
    ParseString(stock_vector,"{[CODE:1003],[NAME:Comp3],[PRICE:140]}");
    ParseString(stock_vector,"{[CODE:1004],[NAME:Comp4],[PRICE:170]}");

    displayStock(stock_vector);
    return 0;
}