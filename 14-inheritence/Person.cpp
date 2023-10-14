#include <iostream>
#include "Person.h"
#include <string>

using namespace std;

Person::Person()
{
}

Person::Person(string n, int a)
{
    name = n;
    age = a;
}

Person::~Person()
{
}


void Person::display()
{
    cout<<name<<"\t"<<age;
}
