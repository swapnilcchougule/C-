/*Theory @ https://cplusplus.com/doc/tutorial/control/ *

/*Selection statements: if and else
  Syntax: if (condition) statement
*/

#include <iostream>
using namespace std;

int main()
{int num;
 cout<<"Enter any number : " ;
 cin >> num;
 if(num < 10) cout<<"number is smaller than 10 : " << num <<endl ;
 else if(num == 10) cout<<"number is equal to 10 : " << num <<endl ;
 else if(num >=11 && num <=20 ) cout<<"number is greater than 10 and less than 21 : " << num <<endl ;
 else cout<<"number is greatet than 20 : " << num <<endl ;
}
