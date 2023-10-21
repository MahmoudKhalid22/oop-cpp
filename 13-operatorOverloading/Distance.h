#include <iostream>


class Distance
{
private:
   int feet,inches;
public:
    Distance():feet(0),inches(0){}

    Distance(int f, int i):feet(f),inches(i){}

    void display(){
        std::cout << "feets" << feet << std::endl;
        std::cout << "inches" << inches << std::endl;
    }

    Distance operator + (Distance a){
        int f = feet + a.feet;
        int in = inches + a.inches;

        return Distance(f,in);
    }

};

