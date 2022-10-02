/* 
Classes and Objects in C++
-Defining Classes
-create a class
-Defining Objects
-create an object of the class
-Member Functions
-To create a function
-Encapsulation
-Data Abstraction 
https://spoken-tutorial.org/watch/Advanced+Cpp/Classes+And+Objects/English/
*/

#include <iostream>
using namespace std;

class square
{
 int x;          // access specified not declared so by default it is private
 public:
 int area (int); // function area is public function 
};               // close class

int square :: area (int a) // class name :: function name 
                           // :: specifies fun 'area' is not at global function it is the member function of class square 
{ 
 x = a;
 return x*x;
//return (a*a)+2;
}

int main()
{
 square sqr; // sqr is a object of class square. (object -> classname objectname;)
 cout << "Area of square is is : "<< sqr.area(4)<<"\n";  // call afunction using object
 return 0; 
} 

