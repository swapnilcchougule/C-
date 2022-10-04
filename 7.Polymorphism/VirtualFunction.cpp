/* Theory @ https://www.geeksforgeeks.org/cpp-polymorphism/?ref=lbp
            https://www.w3schools.com/cpp/cpp_polymorphism.asp
	    https://www.javatpoint.com/cpp-polymorphism
The term "Polymorphism" is the combination of "poly" + "morphs" which means many forms.
lady behaves like : Teacher, daughter, wife , mother
 function name eat is same in class Animal, Dog, cat but the behaviour is different in each class
 
 A virtual function is a member function that is declared in the base class using the keyword virtual and is re-defined (Overriden) in the derived class. 
Some Key Points About Virtual Functions:
1.Virtual functions are Dynamic in nature. 
2.They are defined by inserting the keyword “virtual” inside a base class and are always declared with a base class and overridden in a child class
3.A virtual function is called during Runtime

*/
 
#include<iostream>
using namespace std;

// Base class (parent class)
class Animal
{public:
  virtual void eat()
  {cout<< "Animal eating...." << "\n";   // virtual function
  }
  void sound()
  {cout<< "Animal Sound...." << "\n";
  }
};
// Derived class (child class)
class Dog : public Animal
{public:
 void eat()
 {cout<<"Dog eating bread..." << "\n";
 }
 void sound()
 {cout<< "Dog Sound....Brksss" << "\n";
 }
};
// Derived class (child class)
class Cat : public Animal
{public:
 void eat()
 {cout<<"cat eating rat..." << "\n";
 }
 void sound()
 {cout<< "Cat Sound....Meuuuuu" << "\n";
 } 
};
// Derived class (child class)
class unkownAnimal : public Animal
{
};

int main()
{Animal *Aptr;         // Create parent class (Animal) pointer
 Dog obj_d1;           // creat  child class (Dog) object
 Cat obj_c1;           // creat object of child class (cat)
 
 Aptr = &obj_d1;       // Parent class pointer pointzing to object of class dog
 Aptr->eat();          // eat is virtula function. o/p :- Dog eating bread...
 Aptr->sound();        //                          o/p :- Animal Sound....
 
 Aptr = &obj_c1;       // Parent class pointer pointzing to object of class cat
 Aptr->eat();          // eat is virtula function. o/p :- cat eating rat...
 Aptr->sound();        //                          o/p :- Animal Sound....

 return 0;
}
