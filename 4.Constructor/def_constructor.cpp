/*constructor is special method which is invocked automatically at the time of object creation.
constructor has same name as the class, followed by parentheses ()
Types: 1. Default constructor (no arguments)  2. Paramaterized constructor*/

/*This example illustrate Default Constructor*/ 

#include<iostream>
using namespace std;

class Employee   // The class
{public:         // Access specifier
  Employee()     // Constructor
  {cout<<"Default constructor invocked" << endl;
  }
};
 
int main()
{Employee obj1; // creating an object of class Employee (this will call the constructor)
 Employee obj2; // creating an object of class Employee (this will call the constructor)
 return 0;
}
