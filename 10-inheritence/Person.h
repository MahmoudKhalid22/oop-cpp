#include <string>

using namespace std;
class Person
{
private:
    string name;
    int age;
public:
    Person(/* args */);
    Person(string n, int a);
    ~Person();


    void display();
};

