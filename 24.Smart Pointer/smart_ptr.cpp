/*
Ref: https://en.cppreference.com/book/intro/smart_pointers
     https://www.codecademy.com/resources/docs/cpp/smart-pointers

Pointer: A pointer variable that stores the address of another variable in it.

smart pointer is a class thatr holds and manages a pointer through a tecnique called "Resource Acquisition is Initialization" (RAII)
Smart pointers are used to make sure that an object is deleted if it is no longer used (referenced).
There are 3 std smart pointers defined in <memory> header file

1) unique_ptr<T> : unique pointer does not share ownership, and will free the resource at the end of the scope.
2) shared_ptr<T> : shared pointer does share ownership, and will only free the resource 
		    when there are no other owners counted and it has reached the end of the scope.
3) weak_ptr<T>   : weak pointer is used with a shared pointer, but it does not add to the reference counter like a shared pointer does.

Memory leaks occur when new memory is allocated dynamically and never deallocated. 
In c, new memory is allocated by the malloc or calloc functions, and deallocated by the free function. 
In C++, new memory is usually allocated by the new operator and deallocated by the delete or the delete [] operator.
*/

#include <iostream>
#include <memory>
using namespace std;

/* Declaration and Initialization of Pointer variable */

string game = "Cricket"; // string variable game
string* gm_ptr = &game;  // A pointer with the name gm_ptr, that stores the address of game

// my_fun1:  memory leak with pointer

void my_fun1()
{int* valuePtr = new int(44);     
 int x = 45;
 // ...
 cout << "Memory address: " << valuePtr << "   value:  " << *valuePtr <<"\n";
 
 if (x == 45) return ;   // here we have a memory leak, valuePtr is not deleted
 // ...                  // no line of code will be executed further
 delete valuePtr;
}

// my_fun2: No memory leak with smart pointer
// The unique_ptr<> template holds a pointer to an object and deletes this object when the unique_ptr<> object is deleted. 
// So, in the example below, it does not matter if the function scope is left through the return statement, at the end of the function or 
// even through an exception: The unique_ptr<> destructor is always called and therefore the object (int in the example) always deleted.

void my_fun2()
{unique_ptr<int> valuePtr(new int(55));   // valuePtr, for handling dynamically allocated objects in a restricted scope.
 int x = 45;
 cout << "Memory address: " << &valuePtr << "   value:  " << *valuePtr <<"\n";
 // ...
 if (x == 45) return;   // no memory leak anymore!
 // ...                 // no line of code will be executed further
 cout <<  *valuePtr <<"\n"; 
}

// y_fun2: No memory leak with smart pointer
// in the case below, if the unique_ptr<> already holds a pointer to an existing object, 
// this object is deleted first and then the new pointer stored.

void my_fun3()
{unique_ptr<int> valuePtr; 
 valuePtr.reset(new int(66));
 int x = 45;
 cout << "Memory address: " << &valuePtr << "   value:  " <<  *valuePtr <<"\n";
 // ...
 if (x == 45) return;   // no memory leak anymore!
 // ...                 // no line of code will be executed further
 cout <<  *valuePtr <<"\n"; 
}

int main()
{cout << *gm_ptr <<"\n"; // dereference operator * is used to get the value stored in the memory location pointed by the pointer
 cout <<  gm_ptr <<"\n";
 
 // consider if we call my_fun1 several times, then memory will be allocated dynamically to valuePtr several times 
 // it will result in Memory leak, as valuePtr is not deleted
 my_fun1();
 my_fun1();
 my_fun1();
 my_fun1();
 my_fun1();
     
 // consider if we call my_fun2 several times, then memory will be allocated dynamically to valuePtr only one time  
 // No Memory leak, as valuePtr is smart pointer   
 my_fun2();
 my_fun2();
 my_fun2();
 my_fun2();
 my_fun2();
 
 my_fun3();
 my_fun3();
 my_fun3();
 my_fun3();
 my_fun3();
}








