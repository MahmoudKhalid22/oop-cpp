## Pointers

* Each var in a program occupies a part of the computer's memory, for example an integer var occupies 4 bytes of memory

* The location of the piece of memory used to store a variable is called the address of that variable

* An address is some kind of number similar to house numbers in a street that is used to locate the information stored in that particular variable

![](https://slideplayer.com/slide/9444786/29/images/3/Variables+and+memory+addresses.jpg)

## Pointer Variables

* A pointer variable is a variable that holds address values 

* Each data type has its own pointer variable, pointer to int, pointer to double, pointer to char, ...

* C/CPP uses the address-of operator & to get the address of an variable and get content-of operator * to access the value of the variable pointed to

int i = 17;
int *ptr; // define a pointer to an integer variable
ptr = &i;  // assign the address of x to pointer
cout<<*ptr<<endl;  // prints content of variable


![Illustrative image](https://i.stack.imgur.com/AymB9.png)


### Using a pointer to access the elements of a string

char msg[] = 'Hello';   ==> in the memory  'H' 'e' 'l' 'l' 'o' '\0'
char* ptr;
ptr = msg;
*ptr = 'M';
ptr++;
*ptr = 'a';


### Pointers and arrays

* Array can be accessed using pointers

* The name of an array is also a constant pointer to the data type of the elements stored in the array

int arr[5] = {23,5,12,34,17};
for(int i = 0;i<5;i++){
    cout<<arr[i]<<endl;
}
for(int i = 0;i<5;i++){
    cout<<*(arr + i)<<endl;  // using pointer to access elements

    // array is of type pointer to integer
}

### Pointers as function arguments

* C/CPP offers three different ways to pass arguments to a function
    - by value : void f(int x);
    - by reference : void f(int &x);
    - by pointer : void f(int* x);

* In passing by value the function obtains only a local copy of the variable, so that changes to the local variable have no impact on the argument with which the function was invoked

* In passing by reference and passing by pointer the function manipulates the original variable rather than only a copy of it

void swap(double &x, double &y){
    double tmp = x;
    x = y;
    y = tmp;
}

void swap(double* ptr1, double* ptr2){
    double tmp = *ptr1;
    *ptr1 = *ptr2;  // de-referencing pointer
    *ptr2 = tmp;
}