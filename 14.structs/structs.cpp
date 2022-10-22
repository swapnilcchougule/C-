/* https://www.javatpoint.com/cpp-structs
https://www.w3schools.com/cpp/cpp_structs.asp#:~:text=Structures%20(also%20called%20structs)%20are,%2C%20bool%2C%20etc.).
Structure is a collection of different data types. It is similar to the class that holds different types of data.
*/
#include <iostream>
#include <string>
using namespace std;

struct Student
{int id;
 string name;
 int age;
};

int main()
{Student s1;
 s1.id = 7;
 s1.name = "swapnil";
 s1.age = 27;



 cout << s1.id << " " << s1.name  << " " << s1.age << "\n";
}
