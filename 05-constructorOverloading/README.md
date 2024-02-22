## overloading constructor

if you want a contructor with no inputs => you'll make it empty

but if you want to get initial values from the user, then you'll make another constructor with attributes in .h file.

```
Rectangle()
{

}
```

```
Rectangle(float a, float b);
```

in class.cpp file 👇🏾

```
Recctangle::Rectangle();
Rectangle::Rectangle(float a, float b):length(a), width(b);
```
