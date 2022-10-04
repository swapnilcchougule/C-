/*Encapsulation, is to make sure that "sensitive" data is hidden from users. 
To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). 
If you want others to read or modify the value of a private member, you can provide public get and set methods.*/ 

/*Encapsulation example, Hiding Salary attribute and using get and set methods*/

#include<iostream>
using namespace std;

class Employee
{private:
  int salary; 		  // private attribute
 public:
  void setSalary(int s)  // Setter 
  {salary = s;           // set parameter s to private attribute salary
  }
  int getSalary() 	  // Getter
  {return salary;        // return salary when getSalary() fun is called
  }
};

int main()
{Employee e1;		  //creating an object of Employee   
 e1.setSalary(50000);    // set sallery 
 cout<< "Salary of employee e1 is : " << e1.getSalary() << "\n";  //print
 return 0;
}
