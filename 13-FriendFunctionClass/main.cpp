#include <iostream>
#include "Person.h"

using namespace std;


int print(Person p)
{
    return p.age;
}


int main()
{
    

    Person one("Mahmoud", "male", 22);

    cout<<print(one);

    return 0;
}
