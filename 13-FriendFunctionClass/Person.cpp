#include <string>
#include "Person.h"

using namespace std;

Person::Person()
{
}

Person::Person(string n, string g, float a)
{
    name = n;
    gender = g;
    age = a;

}

Person::~Person()
{
}

void Person::setName(string n)
{
    name = n;
}

string Person::getName(){
    return name;
}

