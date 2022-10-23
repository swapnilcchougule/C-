/* https://www.javatpoint.com/cpp-structs
https://www.w3schools.com/cpp/cpp_structs.asp#:~:text=Structures%20(also%20called%20structs)%20are,%2C%20bool%2C%20etc.).
Structure is a collection of different data types. It is similar to the class that holds different types of data.
*/
#include <iostream>
#include <string>
using namespace std;

// Declare a structure named "Student"
struct student
{int id;
 string name;
 int age;
};

// Declare a structure named "car"
struct car 
{string brand;
 string model;
 int year;
};


int main()
{// Create a car structure and store it in myCar1;
 student s1;
 s1.id = 7;
 s1.name = "swapnil";
 s1.age = 27;

 // Create a car structure and store it in myCar1;
 car car1;
 car1.brand = "BMW";
 car1.model = "X5";
 car1.year = 1999;

 cout << s1.id << " " << s1.name  << " " << s1.age << "\n";
 cout << car1.brand << " " << car1.model  << " " << car1.year << "\n";
}
