#include <string>


using namespace std;


class Person
{
private:
   string name;
   string gender;
   float age;
public:
    Person();
    Person(string n, string g, float a);
    ~Person();
    void setName(string n);
    string getName();

    friend int print(Person p);
};

