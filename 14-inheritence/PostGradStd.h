#include <iostream>
#include "Student.h"
#include <string>

using namespace std;

class PostGradStd : public Student{
    private:
        string researchInterest;
    public: 
        PostGradStd(string n, int a, string dp, float gp, string ra):Student(n,a,dp, gp){
            researchInterest = ra;
        }

        void display(){
            Student::display();
            cout<<"\t"<<researchInterest;
        }

};