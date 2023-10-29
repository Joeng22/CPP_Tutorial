/*
To Learn Typedef and enum
*/

#include<iostream>

using namespace std;

typedef int AGE;
typedef int EMPID;
typedef float SALARY;
typedef string NAME;


// Decleared a class "emp" for saving employee details
class emp{
    public:  // Decleared as public, to access the class objects outside the class
        AGE age;
        EMPID id;
        SALARY salary;
        NAME name;

};


//Sample function for demonstrating the functionality of class
void func1()
{
    emp emp1; // emp class object emp1

    //populating the values of emp class object
    emp1.age = 25;
    emp1.id = 1101;
    emp1.salary = 25000;
    emp1.name = "BOB";

    //Display class variables;
    cout<<"id:"<<emp1.id<<endl;
    cout<<"age:"<<emp1.age<<endl;
    cout<<"salary:"<<emp1.salary<<endl;
    cout<<"Name:"<<emp1.name<<endl;

}



int main()
{
    int age1;   // variable age1 is decleared as type int
    typedef int AGE; //create a new name "AGE" for existing variable "int", it will be helpful for programmers for identifing the use of the variable from the typedef name.

    AGE age2;

    age1=25;
    age2=age1;

    cout<< "age1 :"<<age1<<endl;
    cout<< "age2 :"<<age2<<endl;

    func1();
    return 0;
}