/*
Maps are associative containers that have elemants with key-value paira.
The keys are used to sort and identify the elements, while the values store the content associated with the keys.
Each mapped value must have unique key value.

Syntax: map<type1, type2> mapName;       // type1 and type2 are the data types of the key and value, respectively.
                    or
	map<type1, type2> mapName { {key1, value1}, {key2, value2}, ...};
*/

#include <iostream>
#include <iterator>
#include <map>
using namespace std;

int main()                       
{map<string, int> clothingStore {{"tshirt", 10}, {"pants", 12}, {"sweaters", 18}};     // Initializing map with items
 cout << clothingStore["sweaters"]<<endl;  						  // Accessing Elements (Output: 18 )
 
 map<string, int> emptyMap;                                                            // Initializing emptyMap
 emptyMap ={{"tshirt1", 110}, {"pants1", 112}, {"sweaters1", 118}};                    // assigning items to emptyMap
 cout << emptyMap["tshirt1"]<<endl;  						   	  // Accessing Elements (Output: 110 )

 map<int,string> reptiles                                                              // Initializing map reptiles with items
 {
  {10, "Komodo Dragon"}, {15, "Saltwater Crocodile"}, {8, "Leatherback Sea Turtle"}
 };
 map<int, string> :: iterator iter;  							  // Initializing iterator
 for (iter=reptiles.begin(); iter != reptiles.end(); iter++)
 {cout << '\t' << iter->first << '\t' << iter->second  << '\n';   
 }
 
 return 0;
}
