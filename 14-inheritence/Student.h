#include <string>
#include "Person.h"

using namespace std;

class Student : public Person
{

private:
    string department;
    float gpa;


public:

    Student(){
    }

    ~Student(){}

    Student(string n, int a, string dp, float gp):Person(n, a){
        department = dp;
        gpa = gp;
    }

    void display(){
        Person::display();
        cout<<"\t"<<department<<"\t"<<gpa;
    }


};