#include <iostream>
#include <string>

using namespace std;

const double pi = 3.14;
class Shape
{
private:
   string color;
public:
  
    Shape(string c){
        color = c;
    }

    virtual double getArea(){
        cout<<"Parent class area:"<<endl;
        return 0;
    }
    virtual void draw(){
        cout<<"Draw Parent Shape in "<<color<<endl;
    }
    virtual void erase(){
        cout<<"Erase Parent Shape"<<endl;
    }
};

class Rectangle:public Shape{
    private:
        double width;
        double length;
    public:
        Rectangle(double l, double w, string c):Shape(c){
            width = w;
            length = l;
        }
        double getArea(){
            cout<<"Rec area is: "<<(width * length)<<endl;
            return 0;
        }
        void draw(){
        cout<<"Draw Rectangle"<<endl;
        }
        void erase(){
        cout<<"Erase Rectangle"<<endl;
        }
};
class Circle:public Shape{
    private:
        double radius;
    public:
        Circle(double r,  string c):Shape(c){
            radius = r;
           
        }
        double getArea(){
            cout<<"Rec area is: "<<(radius * pi * radius)<<endl;
            return 0;
        }
        void draw(){
        cout<<"Draw Circle"<<endl;
        }
        void erase(){
        cout<<"Erase Circle"<<endl;
        }
};


int main()
{
    /* code */
    Shape* shap_ptr;
    Rectangle rec(5,4,"blue");
    Circle c(3,"black");

    shap_ptr = &rec;
    shap_ptr -> getArea();
    shap_ptr -> draw();
    shap_ptr -> erase();
    shap_ptr = &c;
    shap_ptr -> getArea();
    shap_ptr -> draw();
    shap_ptr -> erase();
    return 0;
}
