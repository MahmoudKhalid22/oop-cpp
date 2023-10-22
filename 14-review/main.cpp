#include <iostream>
#include "Employee.h"


using namespace std;

int main(int argc, char const *argv[])
{
    Employee* emp_ptr;

    Sales s1("Ahmad", 120, 5000,50000,0.10);

    Engineer eng1("Mahmoud", 150,7000,"SW Engineer", 5,10,50);

    emp_ptr = &s1;

    cout<<emp_ptr->getTotalSalary()<<endl;
    emp_ptr->print();
    cout<<"---------------------"<<endl;
    emp_ptr = &eng1;

    cout<<emp_ptr->getTotalSalary()<<endl;
    emp_ptr->print();

    return 0;
}
