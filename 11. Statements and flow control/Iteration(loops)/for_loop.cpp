/*Theory @ https://cplusplus.com/doc/tutorial/control/ *

/* for loop 
  Syntax: for (initialization; condition; increase) statement;
  
  Range-based for loop
  Syntax: for ( declaration : range ) statement;
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{/* incrementing loop */
 cout<<"-------------------1.incrementing loop--------------------" << endl;
 for(int n=0;n<10;n++)
 {cout<<"lst loop value on count n : " << n << "\n";
 }
 /* decrementing loop */
 cout<<"-------------------2.decrementing loop--------------------" << endl;
 for(int n=10;n>0;n--)
 {cout<<"2nd loop value on count n : " << n << "\n";
 }
 /*  i=row and j=column */
 cout<<"-------------------3.i=row and j=column--------------------" << endl;
 for(int i=0;i<=5;i++)
 {for(int j=0;j<=5;j++)
  {cout <<"i,j : " << i << "," << j << "\n";
  }
 } 
 /*  i=row (increment) and j=column (decrement)*/
 cout<<"-------------------4.i=row (increment) and j=column (decrement)--------------------" << endl;
 int i =0 , j =20; 
 for(i=0,j=20;i!=j;i++,j--)
 {cout <<"i,j : " << i << "," << j << "\n";
 }
 /* Range-based for loop */
  cout<<"-------------------5.Range-based for loop--------------------" << endl;
  string str {"Hello!"};
  int arr [10]={0,1,2,3,4,5,6,7,8,9};
  for (char c : str)
  {cout << "[" << c << "]";
  }
  cout << '\n';
 
  for (int c : arr)
  {cout << "[" << c << "]";
   c++;
  }
  cout << '\n';
}



