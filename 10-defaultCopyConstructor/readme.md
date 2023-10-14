### default copy constructor

another way to initialize an object

used to initialize an object with another object of the same type

No need to create a special constructor for it; one already built in all classes
it copy just values(parameters) not methods int the constructor

Distance d1;

Distance d2(3,15);

Distance d3(d2); // this is default copy constructor

Distance d4 = d2; // another methor for default copy constructor
