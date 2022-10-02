/*call by value: In call by value, original value is not modified.In call by value, value being passed to the function is locally stored by the function parameter in stack memory location. If you change the value of function parameter, it is changed for the current function only. It will not change the value of variable inside the caller method such as main().

In call by reference, original value is modified because we pass reference (address). Here, address of the value is passed in the function, so actual and formal arguments share the same address space. Hence, value changed inside the function, is reflected inside as well as outside the function.
 */
 
#include<iostream>
using namespace std;

void swap(int *x,int *y)  // function to swap the data
{int swap;                // local var to store the data
 swap=*x;                 
 *x=*y;
 *y=swap;
}


int main()
{int x = 500,y=800;
 swap(&x,&y);             // passing reference (address) to function        
 cout << "value of the x is : "<< x << endl;
 cout << "value of the y is : "<< y << endl;
 return 0; 
}



