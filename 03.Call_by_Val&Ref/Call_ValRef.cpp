/*call by value: In call by value, original value is not modified. In call by value, value being passed to the function is locally stored by the function parameter in stack memory location. If you change the value of function parameter, it is changed for the current function only. It will not change the value of variable inside the caller method such as main().

In call by reference, original value is modified because we pass reference (address). Here, address of the value is passed in the function, so actual and formal arguments share the same address space. Hence, value changed inside the function, is reflected inside as well as outside the function.
 */
#include<iostream>
using namespace std;

void chg_v(int data);  // function change_value for call by value 
void chg_r(int *data); // function change_reference for call by reference 

int data1=3; 		// var data1 to pass in fun chg_v
int data2=3; 		// var data2 to pass in fun chg_r

void chg_v(int data1)
{data1 =5;             // change data1
 cout << "value of the data1 local to fun is : "<< data1 << endl;
}

void chg_r(int *data2)
{*data2 =5;            // change data2
 cout << "value of the data2 local to fun is : "<< *data2 << endl;
}

int main()
{//int data1=3; 		// var data1 to pass in fun chg_v
 //int data2=3; 		// var data2 to pass in fun chg_r 
 chg_v (data1);
 chg_r (&data2);
 cout << "value of the data1 is : "<< data1 << endl;
 cout << "value of the data2 is : "<< data2 << endl;
 return 0; 
}



