/* Theory @ https://www.geeksforgeeks.org/cpp-polymorphism/?ref=lbp
            https://www.w3schools.com/cpp/cpp_polymorphism.asp
	    https://www.javatpoint.com/cpp-polymorphism
The term "Polymorphism" is the combination of "poly" + "morphs" which means many forms.
lady behaves like : Teacher, daughter, wife , mother
 function name eat is same in class Animal, Dog, cat but the behaviour is different in each class
*/
 
#include<iostream>
using namespace std;

// Base class (parent class)
class Animal
{public:
  void eat()
  {cout<< "Animal eating...." << "\n";
  }
};
// Derived class (child class)
class Dog : public Animal
{public:
 void eat()
 {cout<<"Dog eating bread..." << "\n";
 }
};
// Derived class (child class)
class Cat : public Animal
{public:
 void eat()
 {cout<<"cat eating rat..." << "\n";
 }
};
// Derived class (child class)
class unkownAnimal : public Animal
{
};

int main()
{Animal obj_a1;  //creat object of parent class (Animal)
 Dog obj_d1;     //creat object of child class (Dog)
 Cat obj_c1;     //creat object of child class (cat)
 unkownAnimal obj_u1;     //creat object of child class (unknownAnimal)
 
 // call function eat using different objects
 obj_a1.eat();   // o/p :- Animal eating....
 obj_d1.eat();   // o/p :- Dog eating bread...
 obj_c1.eat();   // o/p :- cat eating rat...
 obj_u1.eat();   // o/p :- Animal eating....
 
 return 0;
}
