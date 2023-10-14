## Friend Function

A friend function of a class is defined outside that class' scope but it has the right to access all private and protected members of the class.

The prototypes for friend functions appear in the class definition.

friends are not member functions

class className{
....

    friend returnType functionName(args);  // just header

}

note that it's not a member of class so you can't access it by object of class
so you define it outside of the class and if you take inheritance of the class the friend function
doesn't be considered

## Friend class

- just like friend functions, we can also have friend class.
- friend class can access private and protected members of the class to which it is a friend
- Note that the friendship isn't mutual unless we make it so.
- The friendship of the class isn't inherited.
  class A{
  ...
  friend class B;
  }
  class B{
  .....
  }
