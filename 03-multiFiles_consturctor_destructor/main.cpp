#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
    /* code */

    Car car1("Mahmoud",2023,"red");
    cout<<endl;




    cout << "This car is made by company " << car1.getMaker() << "\n" << "and its model is " << car1.getModel() << endl ;

    return 0;
}
