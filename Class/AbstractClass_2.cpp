/*
Abstract class with constructors
Sometimes implementation of all functions cannot be provided in a base class because we don’t know the implementation. Such a class is called an abstract class.

A pure virtual function (or abstract function) in C++ is a virtual function for which we can have an implementation, But we must override that function in the derived class, 
otherwise, the derived class will also become an abstract class. A pure virtual function is declared by assigning 0 in the declaration.

1. A class is abstract if it has at least one pure virtual function.
2. If we do not override the pure virtual function in the derived class, then the derived class also becomes an abstract class.

*/

#include<iostream>

using namespace std;


// An abstract class with constructor
class Base {
protected:
    // protected member variable
    int x;
 
public:
    // pure virtual function
    virtual void fun() = 0;
 
    // constructor of Base class
    Base(int i)
    {
        x = i;
        cout << "Constructor of base called\n";
    }
};
 
class Derived : public Base {
    // private member variable
    int y;
 
public:
    // calling the constructor of Base class
    Derived(int i, int j):Base(i)
    {
        y = j;
    }
 
    // implementation of pure virtual function
    void fun()
    {
        cout << "x = " << x << ", y = " << y << '\n';
    }
};


int main()
{

    return 0;
}