/*
Program to Print Factorial of any given number
*/

#include <iostream>
using namespace std;

int Factorial(int input)
{int fact=1,i;
 for(i=1; i<= input; i++) fact= fact*i;
 return fact;
}

int main()
{int input;
 cout << "Enter the number : "; 
 cin >> input;
 cout << "Factorial of " <<input << " is : " << Factorial(input) << endl;
 return 0;
}

