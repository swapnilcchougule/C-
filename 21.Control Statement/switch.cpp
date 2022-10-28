#include<iostream>
using namespace std;

int main()
{int count;    			// var to store int 
 char chr;     			// vat to store char 
 cout << "Enter the number : ";
 cin >> count;                         
 switch(count)
 {case 1: cout << "case number is : " << count << endl;
  break;
  case 2: cout << "case number is : " << count << endl;
  break;
  case 3: cout << "case number is : " << count << endl;
  break;
  default: cout << "Default block" << endl ;
  break;
 }

 cout << "Enter the character : ";
 cin >> chr;
 switch(chr)
 {case 'a': cout << "case character is : " << chr << endl;
  break;
  case 'b': cout << "case character is : " << chr << endl;
  break;
  case 'C': cout << "case character is : " << chr << endl;
  break;
  default: cout << "Default block" << endl ;
  break;
 }
}
