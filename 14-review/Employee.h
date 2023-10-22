#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
   string name;
   int empId;
   int salary;
public:
    Employee(string n, int id, int s){
        name = n;
        empId = id;
        salary = s;
    }
    virtual int getTotalSalary() = 0;
    

    virtual void print(){
        cout<<"Name : " << name<<", employee id : "<< empId << ", salary : "<<salary<<endl;
    }
};


class Sales : public Employee
{
private:
    float grossSales;
    float commisionRate;
public:
    Sales(string n, int id, int s,float g, float c):Employee(n,id,s){
        grossSales = g;
        commisionRate = c;
    }

    int getTotalSalary(){
        return salary + grossSales * commisionRate;
    }
    void print(){
        Employee::print();
        cout<<", Gross Sales = " << grossSales << ", Commision Rate: " << commisionRate<<endl;
    }

   void setGrossSales(float a){
    grossSales = a;
   }

   void setCommisionRate(float b){
    commisionRate = b;
   }
};


class Engineer :public Employee
{
    private:
        string specially;
        int experience;
        int overTimeHours;
        float overTimeHoursRate;

    public:

        Engineer(string n, int id, int s, string sp, int ex, int ov, float ovR):Employee(n,id,s){
            specially = sp;
            experience = ex;
            overTimeHours = ov;
            overTimeHoursRate = ovR;
        }

        int getTotalSalary(){
            return salary + overTimeHours * overTimeHoursRate;
        }

        void print(){
            Employee::print();
            cout<<"specially : "<< specially<< ", experience : "<< experience<< ", overTimeHours: "<<overTimeHours<<", over time hours rate " << overTimeHoursRate << endl;
        }

        setOverTimeHour(int a){
    overTimeHours = a;
}


setOverTimeHoursRate(float a){
    overTimeHoursRate = a;
}


};