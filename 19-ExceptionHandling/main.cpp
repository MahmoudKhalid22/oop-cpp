#include <iostream>
#include <string>

using namespace std;

void division(int num1,int num2){
    int x = num1, y = num2;
    try{
        if(x<=30){
            throw "x must be greater than 30";
        }
        if(y==0){
            // throw exception();
            throw "division by 0";
        }
        else{
            
            cout<<x/y;
    
        }
    }
    // catch(const char* msg){
    //     // cout<<e.what()<<endl;
    //     cout<< msg <<endl;
    //     // cout<<"you must divide by number > 0";
    // }
   catch(...){
    cout<<"Unhandled Exception"<<endl;  // for general handling
   }


}

int main()
{
    division(10,10);
    return 0;
}
