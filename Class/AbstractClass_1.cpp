/*
Abstract class
Sometimes implementation of all functions cannot be provided in a base class because we don’t know the implementation. Such a class is called an abstract class.

A pure virtual function (or abstract function) in C++ is a virtual function for which we can have an implementation, But we must override that function in the derived class, 
otherwise, the derived class will also become an abstract class. A pure virtual function is declared by assigning 0 in the declaration.

1. A class is abstract if it has at least one pure virtual function.
2. If we do not override the pure virtual function in the derived class, then the derived class also becomes an abstract class.

*/

#include<iostream>

using namespace std;

class Base {
    // private member variable
    int x;
 
public:
    // pure virtual function
    virtual void fun() = 0;
 
    // getter function to access x
    int getX() { return x; }
};
class Derived:public Base
{
    // private
    int y;

public:
    // implementation of the pure virtual function
    void fun() { cout << "fun() called implemented in derived class"<<endl; }
};
int main()
{
    Derived d;
    Base b;
    d.fun();

    return 0;
}