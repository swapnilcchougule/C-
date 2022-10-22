/* Theory: https://www.geeksforgeeks.org/constructors-c/?ref=lbp
constructor is special method which is invocked automatically at the time of object creation.
constructor has same name as the class, followed by parentheses ()
Constructor is invoked at the time of object creation. 
It constructs the values i.e. provides data for the object which is why it is known as constructors.
Types: 1. Default constructor (no arguments)  2. Paramaterized constructor
Rules: 1.Same name as class
       2.no return type
       3.public access specifier
*/

/*This example illustrate Paramaterized Constructor*/ 

#include<iostream>
using namespace std;

class Car 	    // The class
{
 public:           // Access specifier
  string brand;    // Attribute1
  string model;    // Attribute2
  int year;        // Attribute3
  Car(string x, string y, int z); // Constructor declaration
};

/*  Constructor definition outside the class */
Car::Car(string x, string y, int z) 
{brand = x;
 model = y;
 year = z;
 cout << brand << " " << model << " " << year << "\n"; // Print values,when constructor is invocked
}
 
int main()
{
 // Create Car objects and it will invoke (call) the constructor (Car) 
 Car carObj1("BMW", "X5", 1999);       // object1 created
 Car carObj2("Ford", "Mustang", 1969); // object2 created
 return 0;
}
