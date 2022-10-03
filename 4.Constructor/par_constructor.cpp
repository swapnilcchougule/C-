/*constructor is special method which is invocked automatically at the time of object creation.
constructor has same name as the class, followed by parentheses ()
Types: 1. Default constructor (no arguments)  2. Paramaterized constructor*/

/*This example illustrate Paramaterized Constructor*/ 

#include<iostream>
using namespace std;

class Car 	    // The class
{
 public:           // Access specifier
  string brand;    // Attribute1
  string model;    // Attribute2
  int year;        // Attribute3
  
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
