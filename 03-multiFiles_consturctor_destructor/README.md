## How to implement your class in multiple files

file extenstion .h ==> to just make a prototype of your class
and implementation extenstion .cpp ==> to implement actually your class
and main file main.cpp ==> to create objects from your class and use public methods

## to compile it

g++ main.cpp NameOfClass.cpp -o main ==> must write your cpp class

## what is constructor

- Classes can have special methods called constructors.

- A constructor is a method that is automatically called when object is created.

- Constructors typically initialize object attributes and perform other object initialization tasks.

- Constructors are used to perform operations at the time an object is created.

#### some properties

- Constructor has the same name as the class

- Constructor has no return type (not even void)

- Constructor may not return any values

- Constructor is typically public.

```
...
public:
    Recatngle()
    {
        length = 0;
        width = 0;
    }
    // when object has been created, it will has length and width 0
```

## another method to implement constructor ( put the attributes in a list ) <initialization list> because constructors typically used in intialization

```
...
public :
    Rectangle(): length(0), width(0)
    {
        cout<<"The Rectangle length and width are initialized";
    }
    // this is hard coded. you force intialization of object to be length => 0 , width => 0
```

```
...
public:
    Car(float a, string b): price(a), message(b)
    {
        price = a;
        message = b;
    }
    // but here you leave to the user values to input them
```

## Destructor

- A destructor is a special method that is automatically called when an object life time is ended.

- Like constructors, destructor doesn't have a return value

- The most common use of destructors is to deallocate memory that was allocated for the object by the constructor

~(the same name of the class) => is a way to create destructor

```
...
public:
    ~Car()
    {
        cout<<"Good bye \t this is destructor object";
    }
```
