### How to implement your class in multiple files

file extenstion .h ==> to just make a prototype of your class
and implementation extenstion .cpp ==> to implement actually your class
and main file main.cpp ==> to create objects from your class and use public methods

### to compile it

g++ main.cpp NameOfClass.cpp -o main ==> must write your cpp class

### another method to implement constructor ( put the attributes in the list )

constructor(float a, string b): price(a); message(b){
... methods you want to do // This is like javascript one
}

### Deconstructor

the methods or fields you want to perform at the end of object perform ( before the object ends )

~Car() {
cout<<"Good bye \t this is destructor object";
}
