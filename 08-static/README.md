## static variable

if you want a var to be shared with all objects so you need to define it as a static

for example you want to count all objects that constructed from the class

( when all objects must share the same information )
( the lifetime of it is entire program, even if there is no objects )

## static methods

when you want to make a static methods as utilities methods such as multiply or add or subtract in
calculator

for example you don't neet to make a new object to use your methods (add, mul, div)
it will fill the memory and the code will be repeated Unnecessarily

just you call the methods directly from class
