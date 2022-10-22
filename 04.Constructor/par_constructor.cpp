/*Theory: https://www.geeksforgeeks.org/constructors-c/?ref=lbp
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
  
  /* Constructor defined inside the class*/
  Car(string b, string m, int y)  // Constructor with parameters
  {brand = b;
   model = m;
   year = y;
   cout << brand << " " << model << " " << year << "\n"; // Print values,when constructor is invocked
   }
};
 
int main()
{
 // Create Car objects and call the constructor with different values
 Car carObj1("BMW", "X5", 1999);
 Car carObj2("Ford", "Mustang", 1969);
 return 0;
}
