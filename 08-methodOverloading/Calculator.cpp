#include "Calculator.h"

#include <string>
using namespace std;


//    Calculator::Calculator(){};
//    Calculator::~Calculator(){};

int Calculator::add(int num1, int num2)
{
    return num1 + num2;
}

int Calculator::add(int num1, int num2, int num3){
    return num1 +  num2 + num3;
}

double Calculator::add(double af, double bf){
    return af + bf;
}

string Calculator::add(string a, string b){
    return a + b;
}

 
