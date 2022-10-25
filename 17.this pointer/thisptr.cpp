/*https://www.javatpoint.com/cpp-this-pointer
this pointer : this is a keyword that refers to the current instance (data member) of the class.
*/

#include <iostream>   // is a header file library that lets us work with input and output Objects, such as cout.
using namespace std;  // it means that we can use names for Objects and variables from the standard library.
                      // this line can be omitted and replaced with the 'std' keyword, followed by the :: operator for some Objects:
                      // i.g. std::cout << "Hello!";
                      
class Employee
{ private:
  int id;        // data member (instance variable)
  string name;   // data member (instance variable)
  float salary;  // data member (instance variable)
  public:
  Employee(int id,string name,float salary)   // member function 
  {this -> id     = id;          // this pointer, refering to variable id.
   this -> name   = name;        // this pointer, refering to variable name.
   this -> salary = salary;      // this pointer, refering to variable salary.
  }
  void display()
  {cout << id <<" "<< name <<" "<< salary << endl;
  }
};

int main(void)
{Employee e1 = Employee(1,"John",55000);         //creating an object e1 of Employee   
 Employee e2 = Employee(2,"Swapnil",65000);      //creating an object e2 of Employee   
 e1.display();
 e2.display();
 return 0;
}
