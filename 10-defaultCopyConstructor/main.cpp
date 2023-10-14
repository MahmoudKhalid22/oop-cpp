#include <iostream>
#include "Distance.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Distance d1;
    Distance d2(2,3);
    Distance d3(d2);
    Distance d4 = d2;

    cout<<d2.getFeet();
    cout<<d3.getFeet();
    cout<<d4.getFeet();
    cout<<d2.getInches();
    cout<<d3.getInches();
    cout<<d4.getInches();

    return 0;
}
