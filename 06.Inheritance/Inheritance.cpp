/*Theory @ https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm
           https://www.w3schools.com/cpp/cpp_inheritance.asp
Syntax: Single Inheritance
      class derived-class: access-specifier base-class
      {
      };
      
Syntax: Multiple Inheritance      
      class derived-class: access baseA, access baseB....
      {
      };              
*/

#include<iostream>
using namespace std;

// Base class (parent class)
class parent 
{public :
  string Msg;
  void display()
  {cout<< "This msg is from : " <<Msg << "\n";
  }
};

// Derived class (child class)
class chlid: public parent
{
};

// Derived class (grandchild class)
class grandchlid: public chlid
{
};

int main()
{chlid obj_c;  		//creat object of chlid class
 grandchlid obj_gc;  		//creat object of grandchlid class
 obj_c.Msg = "Obj_Child";
 obj_c.display();
 
 obj_gc.Msg = "Obj_GrandChild";
 obj_gc.display();
}









