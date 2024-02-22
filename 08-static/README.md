## static class members

- static fields and static methods do not belong to a single instance of a class.

- a static data item is useful when all objects of the same class must share a common information.

- its lifetime is the entire program. it continues to exist even if there are no objects of the class.

- to invoke a static method or a static field , use the class name rather than the instance name.

#### don't put an intial value to static attribute in the class but outside of the class in implementation(.cpp file)

(::) => called scope operator the value after it from the class prototype before it.

```
int Car::count = 0;
```

## static variable (repeated)

if you want a var to be shared with all objects so you need to define it as a static

for example you want to count all objects that constructed from the class

( when all objects must share the same information )
( the lifetime of it is entire program, even if there is no objects )

## static methods

- Static methods are convenient because they may be called at the class level.

- They are typically used to create utility classes

- Static methods may not communicate with instance fields, only static fields.

when you want to make a static methods as utilities methods such as multiply or add or subtract in calculator.

for example you don't need to make a new object to use your methods (add, mul, div)
it will fill the memory and the code will be repeated Unnecessarily

just you call the methods directly from class

```
Class Calc
{
    public:
        static int add(int num1, int num2)
        {
            return num1 + num2;
        }
        static int mul(int num1, int num2)
        {
            return num1 * num2;
        }
}
```

don't create an object from this class just call it directly with scope operator

```
int result = Calc::add(2,4);
cout<< result;
```
