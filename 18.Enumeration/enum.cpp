/*https://www.javatpoint.com/cpp-enumeration
https://www.geeksforgeeks.org/enumeration-enum-c/?ref=gcse

Enumeration (or enum) is a user defined data type in C.
it is a data type that contains fixed set of constants.
It is mainly used to assign names to integral constants, the names make a program easy to read and maintain.
*/

#include<iostream>
using namespace std;

enum week {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday}d1,d2;                     // creat enum week ,objects d1,d2
enum week_new {Monday_n,Tuesday_n=4,Wednesday_n,Thursday_n,Friday_n=9,Saturday_n,Sunday_n}d3;  // creat enum week_new, object d3
enum year{Jan=1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

enum MotorStatus{INIT=0,                  // creat enum MotorStatus
                 CALIB=1,
                 ALIGNMENT=2,
                 START=3,
                 RUN =4,
                 STOP=5,
                 FAULT=6};               // create object in main 


int main()
{cout << Monday << Tuesday << Wednesday << Thursday << Friday << Saturday << Sunday << endl;   // print enum week : 0,1,2,3,4,5,6
 d1 = Monday ;    // oberation, state of Monday = 0
 d2 = Sunday ;    // oberation, state of Sunday = 6
 cout << d1 << endl;  // print d1 : 0 
 cout << d2 << endl;  // print d2 : 6
 
 cout << Monday_n << Tuesday_n << Wednesday_n << Thursday_n << Friday_n << Saturday_n << Sunday_n << endl;   // print enum week_new: 0,4,5,6,9,10,11
 
 for(int i=Jan;i<=Dec;i++) cout << i << "," ;  // Iteration through enum year : 1,2,3,4,5,6,7,8,9,10,11,12
 
 MotorStatus obj_S0 = INIT;   // object S0 of enum
 MotorStatus obj_S4 = RUN;    // object S4 of enum 
 MotorStatus obj_S5 = STOP;   // object S5 of enum
 cout << endl << obj_S0 << " " << obj_S4 << " " << obj_S5 << endl; // print MotorStatus
}

