/*Example for soring and displaying information of employee using class*/
#include <iostream>  
using namespace std;  

class Employee{  
 public:       //access specifier
  int id;      //data member (also instance variable, also attributes.) When variables are declared within a class, they are called attributes
  string name; //data member(also instance variable)  
  float salary;  
  void insert(int i, string n, float s)   // function insert is public function 
  {id = i;    
   name = n;    
   salary = s;  
   }    
   void display()      // function display 
   {cout<<id<<"  "<<name<<"  "<<salary<<endl;    
   }    
};  

int main(void) {  
    Employee e1; //creating an object of Employee   
    Employee e2; //creating an object of Employee  
    e1.insert(1,"Swapnil",9);    
    e2.insert(2,"John", 10);    
    e1.display();    
    e2.display();    
    return 0;  
}  
