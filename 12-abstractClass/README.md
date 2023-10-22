## Abstract class

* An interface (Abstarct Class) describes the behavior or capabilities of C++ class without committing to a particular implementation of that class. 

* the purpose of an abstract class is to provide the Desired base class Form which will be inherited by other classes in the class hierarchy.

* Abstract classes cannot be used to instantiate objects and serves only as an interface 

* A class is made abstract by declaring at least one of its functions as pure virtual function

// Abstract class that will be inherit and can't be used to instantiate objects
class Shape{
    private:
        string color;
    public:

        Shape(int a,int b){
            width = a;
            height = b;
        }
        // pure virtual function
        virtual int area() = 0;
}

## final classifier

this function which detected as final is can't be overridden  opposite of  pure virtual function

virtual void display () final
{
    cout<< "dummy example";
}