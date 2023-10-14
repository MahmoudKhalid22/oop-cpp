## overloading constructor

if I want a contructor with no inputs => I'll make it empty

but if I want to get initial values from the user, then I'll make another constructor with attributes

Rectangle(){}
in .h file Rectangle(float a, float b);
// in class.cpp => Rectangle::Rectangle(float a, float b):length(a), width(b);
