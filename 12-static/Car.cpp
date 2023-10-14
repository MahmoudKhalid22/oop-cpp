#include "Car.h"



int Car::count = 0;

Car::Car(/* args */)
{
    count++;
}

Car::~Car()
{
    count--;
}

int Car::add(int a, int b){
    return a+b;
}