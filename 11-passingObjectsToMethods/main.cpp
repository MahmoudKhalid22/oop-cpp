#include "Distance.h"
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    

    Distance d1(13,7);
    Distance d2(7,14);

    Distance result = d1.add_distance(d2);

    result.getObj();

    




    return 0;
}
