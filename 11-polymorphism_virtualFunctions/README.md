## polymorphism

it is an object-oriented programming concept that refers to the ability of a variable, function or object to take on multiple forms.

with polymorphism, class objects belonging to the same hierarchical tree
(inherited from a common parent class) may have functions with the same name, but with different behaviors.


## types of polymorphism

* compile time polymorphism
Method overloading

int add (int a, int b);
double add(double a, double b);

* Run time polymorphism
Method overriding

same name and same args but different behaviour

## functions overriding using virtual functions

* A virtual function is a member function which is declared within a base class and is redefined(overridden) by a derived class. when you refer to a derived class object using a pointer to the base class, you can call a virtual function for that object and execute the derived class version of the function

* Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.


we write keyword virutual before the function in base class

usually we use pointers with polymorphism

note you must declare functions as virtual functions else the subclassed doesn't be considered
because it tells compilor that it may be overridden 