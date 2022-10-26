/*
static is a keyword or modifier that belongs to the type not instance. 
So instance is not required to access the static members. 
static can be field, method, constructor, class, properties, operator and event.

Unlike instance field which gets memory each time whenever you create object, there is only one copy of static field created in the memory. It is shared to all the objects.
*/

#include <iostream>
using namespace std;

class Account
{public:
  int acc_num;                         //data member (also instance variable)      
  string acc_name;
  static float rateOfInterest;   
  static int count;     

  Account(int acc_num, string acc_name)
  {this -> acc_num = acc_num;
   this -> acc_name = acc_name;
   count ++;
  }
  void display()
  {cout << acc_num << " "<< acc_name << " " << rateOfInterest << endl;
  }
};

float Account :: rateOfInterest = 6.5;  
int   Account :: count          = 0;  

int main(void) 
{Account a1 = Account(501, "John");    //creating an object of Employee   
 Account a2 = Account(502, "Swapnil"); //creating an object of Employee  
 a1.display();    
 a2.display();   
 cout<<"Total Objects are: "<<Account::count << endl; 
 return 0;  
}  


