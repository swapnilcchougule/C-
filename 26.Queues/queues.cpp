/*
Queues are container adaptors that store elements in a first-in-first-out (FIFO) order. 
Elements inserted into the queue first are removed first.

Syntax:
	queue<type> queueName;
*/

#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{queue<string> myStack; // Declaring a queue
 myStack.push("A");     // The .top() insert the element on the top of the stack.
 myStack.push("B");
 myStack.push("C");
 myStack.push("D");

 while (!myStack.empty())        // The .empty() method returns true if the queue has no elements. Otherwise, it returns false.
 {cout << myStack.front()<<"\n"; // The .front() Returns the next element within the queue.
  cout << "Size : " << myStack.size() <<"\n";  // The .size() method returns the number of elements in the queue
  myStack.pop(); //The .pop() method removes the element at the front of the queue.
 }
}
