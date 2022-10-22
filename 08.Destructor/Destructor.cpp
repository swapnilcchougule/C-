/*Theory @ https://www.geeksforgeeks.org/constructors-c/?ref=lbp
*/

/*Destructor (~)*/

#include<iostream>
using namespace std;
int count = 0;           // var to store constructor count 

class car
{public:
  /* Constructor defined inside the class*/
  car() 
  {count++; 
   cout << "contructor invocked after creating object : " << count << "\n";
  }
  /* Destructor defined inside the class*/
  ~car()
  {cout << "destructor invocked after destroying object : " << count << "\n";
   count--; 
  }
  /* function display*/
  void display()
  {cout << "display : " << count << "\n";
  }
  /* function sum*/
  int sum;                 // var sum to store addition 
  void add(int a, int b)
  { sum = a + b;
   cout << "Sum of " << a << "+" << b << "=" << sum << "\n";
  }
};

int main()
{/* Create Car objects and it will invoke (call) the constructor (Car) and destructor(~car) */
 car obj_c1, obj_c2,obj_c3, obj_c4; // create objects of class car
 /*if there are other functions, destructor is envocked at the end*/
 //obj_c1.display();                
 //obj_c1.add(5,3);
 return 0;
}
