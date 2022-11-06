/*https://www.javatpoint.com/cpp-stl-components
https://www.javatpoint.com/cpp-iterators
https://www.codecademy.com/resources/docs/cpp/vectors
Vector: vector is a class that creates a dynamic array allowing insertion and deletions at the back.
	A vector is a sequence container class that implements dynamic array, means size automatically changes when appending elements. 
	A vector stores the elements in contiguous memory locations and allocates the memory as needed at run time.
Syntax: vector<object_type> v1;  


Iterators : Iterators are just like pointers used to access the container elements.
	    Iterators can be smart pointers which allow to iterate over the complex data structure
Syntax    : <ContainerType> :: iterator;  
	    <ContainerType> :: const_iterator;  	    
*/

#include<iostream>
#include<iterator>
#include<vector>

using namespace std;

int main()
{vector<int> v1 {11,12,13,14,15};  // init vector v1
 vector<int>::iterator itr;   // init iterator
 for(itr=v1.begin();itr!=v1.end();itr++)  
  {cout << *itr << "\n";  
  }
  cout << "Size of vector v1 is : " << v1.size() <<"\n"; // show the size of vector
  
  for(int i=0;i<v1.size();i++)
  {cout<<v1.operator[](i) << "\n"; 		           // v1.operator[ ](pos); This function is used to access a specified element.
  }
  cout << "Size of vector v1 is : " << v1.size() <<"\n"; // show the size of vector
  
  // Adding Elements
  v1.push_back(66);        // This method pushes elements to the back of a vector:
  v1.insert(v1.begin(),0); // This method inserts new elements before the element at the specified position.
  
  cout << v1.at(0)<< "\n"; //.at() function provides a safer way of accessing elements in a vector. 
  cout << v1[6] << "\n";   

  cout << v1.at(100)<< "\n"; // this line will throw error
}



