/*https://www.javatpoint.com/cpp-aggregation
aggregation is a process in which one class defines another class as any entity reference. 
It is another way to reuse the class.
*/

#include <iostream>  
using namespace std;  

class Address                                            // classs 
{public:  
  string addressLine, city, state;  			   // attributes or data members
  Address(string addressLine, string city, string state) // constructor of class Address
  {this->addressLine = addressLine;    
   this->city = city;    
   this->state = state;    
  }    
};  

class Employee    
{private:  
  Address* address;                      	     // Pointer to class Address 
 public:  
  int id;    
  string name;    
  Employee(int id, string name, Address* address)  // constructor of class Employee   
  {this->id = id;    
   this->name = name;    
   this->address = address;    
  }    
  void display()    
  {cout<<id <<" "<<name<< " "<<     
   address->addressLine<< " "<< address->city<< " "<<address->state<<endl;    
  }    
}; 
  
int main(void) 
{Address a1= Address("BobStr.18","Stuttgart","Germany");  // Create an object of class Address
 Employee e1 = Employee(101,"John",&a1);                  // Create an object of class Employee
 e1.display();   
 return 0;  
}  
