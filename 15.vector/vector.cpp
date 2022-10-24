/*https://www.javatpoint.com/cpp-stl-components
https://www.javatpoint.com/cpp-iterators
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
{vector<int> v1 {1,2,3,4,5};  // init vector v1
 vector<int>::iterator itr;   // init iterator
 for(itr=v1.begin();itr!=v1.end();itr++)  
  {cout << *itr << "\n";  
  }
  cout << "Size of vector v1 is : " << v1.size() <<"\n"; // show the size of vector
  for(int i=0;i<v1.size();i++)
  {cout<<v1.operator[](i) << "\n"; 		           // v1.operator[ ](pos); This function is used to access a specified element.
  }
  v1.push_back(16);   
  cout << v1[5] << "\n"; 
}



