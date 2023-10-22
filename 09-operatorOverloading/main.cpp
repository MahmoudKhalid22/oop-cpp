#include <iostream>
#include "Counter.h"
#include "Distance.h"


using namespace std;

int main()

{
    Counter c1(5);
    Counter c2(10);
    Counter c3;

    c3 = c1 + c2;
    cout<<c3.getCount()<<endl;


    Distance d1(5,10);
    Distance d2(10,20);
    Distance d3;
    d3 = d1 + d2;

    d3.display();
    // Counter c3 = c1 + c2;   /
    // std::cout<<c3.getCount();
    return 0;
}
