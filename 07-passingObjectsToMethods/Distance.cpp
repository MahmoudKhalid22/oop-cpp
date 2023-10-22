#include "Distance.h"
#include <iostream>

using namespace std;

Distance::Distance(double f, double i): feet(f), inch(i)
{
}

Distance::Distance()
{
}

Distance::~Distance()
{
}

Distance Distance::add_distance(Distance f)
{
    Distance result;
    result.feet = feet + f.feet;
    result.inch = inch + f.inch;
    return result;
}


void Distance::getObj(){
    cout<<feet<<"\t"<<inch;
}