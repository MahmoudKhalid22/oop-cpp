#include <string>
using namespace std;

class Car
{
private:
   string name;
   int model;
   static int count;
public:
    Car(/* args */);
    ~Car();

    static int add(int a, int b);
};

