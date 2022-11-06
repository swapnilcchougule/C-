/*
stack is a container that stores elements in a last-in first-out (LIFO) order.

Syntax:
	stack<dataType> stackName;
	stack<dataType, containerType<dataType>> stackName;
*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{stack<string> myStack; // init stack 
 myStack.push("A");     // The .top() insert returns the element on the top of the stack.
 myStack.push("B");
 myStack.push("C");
 myStack.push("D");

 while (!myStack.empty())      // The .empty() method returns true if the stack has no elements. Otherwise, it returns false.
 {cout << myStack.top()<<"\n"; // The .top() method returns the top element on the stack.
  cout << "Size : " << myStack.size() <<"\n";  // The .size() method returns the number of elements in the stack
  myStack.pop(); //The .pop() method removes the last item added to the top of the stack, reducing its size by one.
 }
}
