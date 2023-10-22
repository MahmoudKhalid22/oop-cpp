## Operator overloading

### Unary operator
    ++, --         unary operator

### Binary operator
    +, -, *, /, %           Arithmetic op
    <, <=, >, >=, ==, !=    Relational op
    &&, ||, !               Logical op
    &, |, <<, >>, ~, ^      Bitwise op
    =, +=, -=, *=, /=, %=   Assignment op

### Ternary operator
    ? :  conditional op

## op overloading

* This term refers to giving the normal cpp operators, such as +, *, <=, +=, additional meanings when they are applied to user-defined data types

* Operator overloading is one of the most exciting features of oop

* It can transform complex program listings into easy ones.

    int a, b, c;
    c = a + b;
    Counter c1, c2, c3;
    c3 = c1 + c2;

- The operator keyword is used to overload operators    