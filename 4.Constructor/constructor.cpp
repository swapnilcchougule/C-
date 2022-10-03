/*constructor is special method which is invocked automatically at the time of object creation.
constructor has same name as classs or structure. 
Types: 1. Default constructor (no arguments)  2. Paramaterized constructor*/

/*This example illustrate Default Constructor*/ 

#include<iostream>
using namespace std;
class Employee
{
 public:
  Employee() // member function of class Employee
  {cout<<"Default constructor invocked" << endl;
  }
};
 
int main()
{Employee e1; // creating an object of class Employee
 Employee e2;
 return 0;
}
