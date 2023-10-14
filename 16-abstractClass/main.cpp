#include <string>
#include <iostream>
using namespace std;


// Abstract class
class Shape
{
private:
    string color;
public:
    Shape(){}
    Shape(string c){
        color = c;
    }


    virtual int area() = 0;

    virtual void erase() = 0;

    virtual void draw() = 0;
};

// derived class
class Rectangle: public Shape{

    private:
        int length;
        int width;
    public:
        Rectangle(){}
        Rectangle(int l, int w,string c):Shape(c){
            length = l;
            width = w;
        }
        int area(){
            cout<<"the area of rectangle is " <<(length * width)<<endl;
            return (length * width);
        }

        void draw(){
            cout<<"draw rectangle";
        }
        void erase(){
            cout<<"erease rectangle";
        }

};


int main()
{
    /* code */
    Rectangle rec(8,4,"red");
    rec.area();
    rec.erase();
    
    return 0;
}
