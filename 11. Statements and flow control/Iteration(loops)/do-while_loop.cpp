/*Theory @ https://cplusplus.com/doc/tutorial/control/ *

/* do- while loop 
  Syntax: do statement while (condition);
*/

#include <iostream>
using namespace std;

int main()
{int n = 0;

 do
 {cout << "1st loop executing ....! : "<< n << endl;
  n++;
 }
 while(n<=10);
 cout << "1st loop executing stopped ....! : "<< n << endl;

 while(n>0)
 {cout << "2nd loop executing ....! : "<< n << endl;
  n--;
 }
 cout << "2nd loop executing stopped ....! : "<< n << endl;
 
}
