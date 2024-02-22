## passing objects as parameters to methods

- Objects can be passed to methods as arguments.

- When an object is passed as an argument, the value of the reference variable is passed.

- The value of the reference variable is an address or reference to the object in memory.

- A copy of the object is not passed, just a pointer to the object

if you implemented a class that you make like a new data type

in .h file

```
Distance addFeet(Distance d);
```

```
Distance::Distance addFeet(Distance d)
{

Distance result;

result.feet = feet // this is initialized automatically because of contructor + d.feet;
result.inch = inch + d.inch; // in .cpp file

return result;
}
```

### notice that :-

when you create a new class you actually created a new data type and you can make variables from this data type but these variables called objects.

so if you can pass for a normal function vars as args, you can pass objects as args

```
Distance // the data type returned addFeet // the name of the function (Distance d // the object as an argument);
```
