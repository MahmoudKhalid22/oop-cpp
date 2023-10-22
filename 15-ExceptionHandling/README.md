## Exceptions

- Indicate problems that occur during a program's execution (run time error)

- A cpp exception is a response to an exceptional circumstance that arises while a program is running, such as an attempt to divide by zero.

## Exception Handling

- Can resolve exceptions

  - Allow a program to continue executing or
  - Notify the user of the problem and
  - Terminate the program in a controlled manner

- Makes programs robust and fault-tolerant

* An Exeption is a class
  - Usually derived from one of the system's exception base classes
* Exception Class is the standard cpp base class for all exceptions
* Provides derived classes with virtual function what()

  - Return the exception's stored error message

* If an exceptional or error situation occurs, program throws an object of that class.

![Exeptions](https://www.guru99.com/images/2/062620_0724_CExceptionH5.png)


Exceptions provide a way to transfer control from one part of a program to another. 
three keywords: try, catch, throw are used

* try - A try block identifies a block of code for which particular exceptions will be activated. It's followed by one or more catch blocks.

* throw - A program throws an exception when a problem shows up. This is done using a throw keyword.

* catch - A program catches an exception with an exception handler at the place in a program where you want to handle the problem. The catch keyword indicates the catching of an exception.

catch(...){
    // for general handling exceptions
}