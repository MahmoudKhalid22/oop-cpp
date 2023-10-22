## inheritance

just intro to inheritance ( parent class, based class - derived class, child class )
and why inheritance => to save money and time

## how to implement inheritance in your app

in your child class file

class Student : public Parent{
// ok this all is inheritance withour any additions

// also you can add your own methods here
}

// you can do also inherit a parent as protected or private ( we will discuss the difference later )

class Student : protected Parent{
// this will make all public and protected fields in parent class are protected

// also you can add your own methods here
}

class Student : private Parent{
// this will make all public, protected and private fields in parent class are private

// also you can add your own methods here
}

## calling base class constructor

if you inherit a class from a parent class and created an object from it
it auto called the constructor ( the default one ) of base class then called the constructor ( default or overloaded depend on called constructor ) of the child class

but if you want to call constructor ( not the default one ) of base class then you should write it because it isn't called auto

then you have a constructor in your base class that has for example some args

class Parent{
    private:

        int age;
        int weight;

    public:
        Parent(int a, int b){
            age = a;
            weight = b;
        }

}

class Child : public Parent{

    private:
        int level;
        int gp;
        string dp;

    public:
        Child(int a, int b // args of base class, ant its args, int c, float d, string e):Parent(a,b){
            level = c;
            gp = d;
            dp = e;
        }

}


## override

if you implemented a method in base class then it will run on the base calss's args only
but if you want to make it run on the child class then you will need override this method

( redefination of based class function in derived class with same args )

class a {
    public:
        virtual void display(){
            cout<<"Hello";
        }
}

class b: public a{
    public:
        void display(){
            cout<<"bye";
        }
}

note (::) => called scope operator


## multi level inheritence
created another class from base class (Student) and put another arg also with reusability and 
override display


## multiple inheritance

it occurs when a class inherits from more than one base class. So the class can inherit features from
multiple base classes at the same time

Unlike other oop programming languages, C++ allows this important features to programmers

it's normal thing if you want to inherit from two classes
the trick here if the two claases have the same name of some functions so you need at this state
to detect which class function you want to use
className::function


