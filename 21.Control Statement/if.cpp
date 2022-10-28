/* control statement
https://www.javatpoint.com/cpp-if-else
syntax :
1)if
   if(condition)
   { // code to be executed }
   
2)if-else
  if (condition)
  { //code if condition is true}
  else
  {//code if condition is false    
  }

3)IF-else-if ladder Statement
  if(condition)
  {// code to be executed if condition is true
  }
  else if(condition)
  {// code to be executed if the condition is true
  }
  else if(condition)
  {// code to be executed if the condition is true
  }
  else
  { //code to be executed if all the conditions are fail
  }
*/

#include<iostream>
using namespace std;

int main()
{int num;
 cout <<"Enter the number : ";
 cin >> num;
 if (num % 2 == 0)
 {cout << num << " : is even number"  << endl; 
 }
 else
 {cout << num << " : is odd number"  << endl; 
 }
 return 0;
}






