#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{
    Calculator calc;

    cout<<calc.add(5,5);
    cout<<endl<<calc.add(5,5,5);
    cout<<endl<<calc.add(453.2,64.31);
    cout<<endl<<calc.add("Mahmoud" , "Khalid");

    return 0;
}
