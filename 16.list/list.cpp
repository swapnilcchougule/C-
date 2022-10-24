/*https://www.javatpoint.com/post/cpp-list
List is a contiguous container while vector is a non-contiguous container i.e list stores the elements on a contiguous memory and vector stores on a non-contiguous memory.
*/
#include<iostream>  
#include<list>  
using namespace std;  

int main()  
{list<int> li_1{1,2,3,4};                  // create the list  
 list<int>::iterator itr = li_1.begin();   // init iterator to begin
 li_1.insert(itr,5);                       // insert 5 at begining
 for(itr=li_1.begin();itr!=li_1.end();itr++) cout<<*itr;  
 
 cout<<"\n"; 
 
 list<string> li_2={" this is the string \n"};  
 list<string>::iterator itr_2=li_2.begin();  
 li_2.insert(itr_2,2,"Swapnil ");  
 for(itr_2=li_2.begin();itr_2!=li_2.end();itr_2++) cout<<*itr_2;  
 return 0;  
}  
