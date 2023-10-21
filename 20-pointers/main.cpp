#include <iostream>


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

int main()
{
    // char msg[] = "hello";
    // char* ptr;
    // ptr = msg;

    // *ptr = 'M';
    // ptr++;
    // *ptr = 'o';
    // ptr+= 2;

    // *ptr = 't';

    // std::cout<<msg;

// ---------------------------------


    double a = 5.0;
    double b = 6.0;
    swap(a,b);    // Call by reference to variable for a , b
    std::cout<<a<<'\t'<<b;
 
    swap(&a,&b);    // Call by pointers to variable for a , b

    std::cout<<a<<"\t"<<b;


    return 0;
}
