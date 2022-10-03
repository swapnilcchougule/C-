/*
https://www.w3schools.com/cpp/cpp_classes.asp
https://www.javatpoint.com/cpp-Object-and-class
https://www.tutorialspoint.com/cplusplus/cpp_classes_Objects.htm

Syntax:

class className
{
  public:    // Public access specifier (members are accessible from outside the class)
  
  private:   // Private access specifier (members cannot be accessed (or viewed) from outside the class)

  protected  // protected access specifier (members cannot be accessed from outside the class, however, they can be accessed in inherited classes.)

};

To access the class attributes(data members and membed functions), use the dot syntax (.) on the Object:
*/

/*Examle to explain class using car*/

#include <iostream>   // is a header file library that lets us work with input and output Objects, such as cout.
using namespace std;  // it means that we can use names for Objects and variables from the standard library.
                      // this line can be omitted and replaced with the 'std' keyword, followed by the :: operator for some Objects:
                      // i.g. std::cout << "Hello!";

                      
class car        // Create a Car class with some attributes   
{
 public:         // Public access specifier (members are accessible from outside the class)
  string brand;  // attributes or data members
  string model;
  int year; 
  
  /* function insert, defined inside the class*/
  void insert(string b, string m, int y)  // function insert 
  {brand = b;    
   model = m;    
   year = y;
  }
  
  /* function display, defined inside the class*/
  void display()      // function display 
   {cout << brand << " " << model << " " << year << "\n"; // Print attribute values
   } 
   
  /* function speed, declaration inside the class and defination will be outside the class*/
  int speed(int maxSpeed);
};      

/* function speed defination outside the class*/
int car::speed(int maxSpeed) 
{return maxSpeed; 
}

int main()
{ 
 car carObj1; 		 // Create an first object of class Car
 carObj1.brand ="BMW";  // Access attribute brand and set values
 carObj1.model ="Y5";   // Access attribute model and set values
 carObj1.year =1999;    // Access attribute year and set values
 
 car carObj2; 		 // Create an second object of class Car
 carObj2.brand ="Audi"; // Access attribute brand and set values
 carObj2.model ="A6";   // Access attribute model and set values
 carObj2.year = 2003;   // Access attribute year and set values
   
 cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n"; // Print attribute values
 cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n"; // Print attribute values
 
 carObj1.insert("BMW","Y5",1999); // Call the function insert
 carObj2.insert("Audi","A6",2003);  
 carObj1.display();               // Call the function display
 carObj1.display(); 
 
 cout <<"BMW speed : " << carObj1.speed(200) << "\n";  // Call the speed fun with an argument
 cout <<"Audi speed : " << carObj2.speed(250) << "\n"; // Call the speed fun with an argument
  
 return 0;
} 












               
                      


