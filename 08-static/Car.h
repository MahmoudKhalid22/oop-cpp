#include <string>
using namespace std;

class Car
{
private:
   string name;
   int model;
   static int count; // all objects now can see this variable and it doesn't belong to each object separately
public:
    Car(/* args */);
    ~Car();

    static int add(int a, int b);
};

