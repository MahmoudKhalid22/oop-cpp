#include <iostream>
#include "Car.h"
#include <string>

using namespace std;

Car::Car(string m, int mo, string c): maker(m),model(mo),color(c){
    
}

Car::~Car() {
    cout<<"Good bye \t this is destructor object";
}

void Car::setMaker(string m)
{
    maker = m;
}

string Car::getMaker()
{
    return maker;
}

void Car::setModel(int mod){
    model = mod;
}

int Car::getModel()
{
    return model;
}

