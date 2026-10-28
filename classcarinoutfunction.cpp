#include <iostream>
using namespace std;

class Car {
    string name;
    float price;

    public:
           void input(){
            cout <<"Enter your name:";
            cin>>name;
            cout <<"Enter price:";
            cin>>price;
           }
           void output(){
            cout <<"Name:"<<name<<endl;
            cout <<"Price:"<<price<<endl;
           }
        
};
       int main(){
        Car c;
        c.input();
        c.output();
        return 0;
       }