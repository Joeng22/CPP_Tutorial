/*
To Learn enum
*/

#include<iostream>

using namespace std;

enum color { red, green, blue } c;


int main()
{
    //Declear an enum for saving error codes,
    enum ErrorCode{
    OK,
    MEM_ERROR=-10,
    SYNTAX_ERROR,
    OTHERS
    };

    ErrorCode err1 = OK;  // Declear a variable of type enum (ErrorCode) and store value OK


    //Print the error codes
    cout<<err1<<endl;  
    cout<<MEM_ERROR<<endl;
    cout<<SYNTAX_ERROR<<endl;

    return 0;
}