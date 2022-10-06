/*Theory @ https://www.w3schools.com/cpp/cpp_exceptions.asp 
Exception handling in C++ consist of three keywords: try, throw and catch

try : statement allows you to define a block of code to be tested for errors while it is being executed.
throw:  keyword throws an exception when a problem is detected, which lets us create a custom error.
catch: statement allows you to define a block of code to be executed, if an error occurs in the try block.
*/

/*Exceptions: try, throw and catch*/

#include<iostream>
using namespace std;

int main()
{int age;                   // var to store age
 cout << "Type your age: "; // Type a number and press enter
 cin >> age;                // Get user input from the keyboard
 try               	     // Block of code to try
  {if(age >= 18)
   {cout << "Access granted..! age is : " << age << "\n";   
   }
   else
    {throw 101;             // Throw an exception when a problem arise
    }
   }
 catch(int Num)             // Block of code to handle errors
  {cout << "Access not granted..! error number: " << Num << "\n";   
  }
}

