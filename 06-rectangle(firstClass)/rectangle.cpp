#include <iostream>

using namespace std;

class Rectangle {
    private:
        float length = 0;
        float width = 0;
    public:
        void setLength(float len){
            if(len > 0) {
            length = len;
            }else{
                cout<< "enter a positive value";
            }
        }
        void setWidth(float wid){
            if(wid > 0){
                width = wid;
            }else{
                cout<<"enter a positive value";
            }
        }

        float getLength() {
            return length;
        }
        float getWidth() {
            return width;
        }

        float area(){

            return length * width;
        }


};

int main() {
    Rectangle rec;

    rec.setLength(5.0);
    rec.setWidth(5.0);

    cout<<rec.area();

    
    return 0;
}