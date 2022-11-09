/*
Function Overloading: With function overloading, C++ functions can have the same name but handle different input parameters.
At least one of the following criteria must be true in order for functions to be properly overloaded:
Each function has different types of parameters.
Each function has a different number of parameters.
The function return type is NOT used to differentiate overloaded functions.
*/

#include <iostream>
using namespace std;

int add(int a, int b) 
{return a + b;
}

double add(double a, double b) 
{return a + b;
}

int add(int a, int b, int c) 
{return a + b + c;
}

int main() 
{cout << add(3, 2) << "\n";     // Calls add(int, int) 
 cout << add(5.3, 1.4) << "\n"; // Calls add(double, double)
 cout << add(2, 6, 9) << "\n";  // Calls add(int, int, int)
}
