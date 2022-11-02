/*goto statement: Also known as jump statement. 
		  It is used to transfer control to the other part of the program. 
		  It unconditionally jumps to the specified label.
*/

#include <iostream>  
using namespace std;  
int main()  
{int age;   
 cout<<"Enter your age: ";    
 cin>>age;  
 if(age < 18) 
 {goto ineligible;         			     // goto label; 
  cout<<"In loop.......!\n";                       // rest of code will not execute
  cout<<"In loop.......!\n";
  cout<<"In loop.......!\n";
  cout<<"In loop.......!\n";
 }               
 else goto eligible;
 
 cout<<"out of loop.......!\n";  		     // rest of code will not execute
 cout<<"out of loop.......!\n"; 
 cout<<"out of loop.......!\n"; 
 cout<<"out of loop.......!\n"; 
 
eligible:                                          // label:
	cout<<"You are eligible to vote!\n";
	return 0;     
ineligible:
	cout<<"You are not eligible to vote!\n";
	return 0;  
}  
