#include <iostream>
#include "Rectangle.h"

double area (double length,double width) {
    return length * width;
    
}

Rectangle::Rectangle(double l, double w): length(l),width(w)
{
    std::cout<< area(length,width);
}
Rectangle::Rectangle(){
    std::cout<<"This is default one";
}
Rectangle::~Rectangle(){}

