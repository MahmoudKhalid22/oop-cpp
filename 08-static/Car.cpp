#include "Car.h"



int Car::count = 0;

Car::Car(/* args */)
{
    count++;
}

Car::~Car()
{
    count--;
    // if the car exits from the process, you will remove it
}

int Car::add(int a, int b){
    return a+b;
}