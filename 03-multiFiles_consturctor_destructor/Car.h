#include <string>
using namespace std;

class Car
{
private:
    string maker;
    int model;
    string color;

public:

    Car(string m,int mo,string c);
    ~Car();
    void setMaker(string m);
    string getMaker();
    void setModel(int mod);
    int getModel();


};

