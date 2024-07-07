/*
Cpp Class Tutorial - 2
Class Inhertence
*/

/*
Notes :
private - members cannot be accessed (or viewed) from outside the class. 
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.


Public, Protected, and Private inheritance in C++

public inheritance makes public members of the base class public in the derived class, and the protected members of the base class remain protected in the derived class.
protected inheritance makes the public and protected members of the base class protected in the derived class.
private inheritance makes the public and protected members of the base class private in the derived class.


*/

#include<iostream>
#include<string>

using namespace std;

class Human
{
    protected:
        int Age;
        string Gender;
        string Name;
};

class Employee:public Human
{
    int Employee_code;

    public:
        Employee(string name,string gender,int age,int employee_code=-1)
        {
            Name = name;
            Gender = gender;
            Age = age;
            Employee_code = employee_code;
        }

        string Get_Name()
        {
            return Name;
        }

        string Get_Gender()
        {
            return Gender;
        }

        int Get_Age()
        {
            return Age;
        }

        int Get_Employee_code()
        {
            return Employee_code;
        }

        void Change_Name(string New_Name)
        {
            Name = New_Name;
        }

        void Add_EmplyeeCode(int employee_code)
        {
            Employee_code = employee_code;
        }
};



int main()
{
    Employee emp1("Martin","Male",45);

    cout<<"Age:"<< emp1.Get_Age() <<endl;
    cout<<"Name:"<< emp1.Get_Name() <<endl;
    cout<<"Employee code:"<< emp1.Get_Employee_code() <<endl;
    cout<<"Gender:"<< emp1.Get_Gender() <<endl;
    emp1.Change_Name("Luther");
    emp1.Add_EmplyeeCode(190011);

    cout<<" ************* After Update ***************"<<endl;
    cout<<"Name:"<< emp1.Get_Name() <<endl;
    cout<<"New Employee code:"<< emp1.Get_Employee_code() <<endl;

    return 0;
}