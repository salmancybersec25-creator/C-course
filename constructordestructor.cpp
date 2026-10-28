#include <iostream>
using namespace std;

class Car {
    string name;
    float price;

    public:
       
    Car(string n, float p){
        name = n;
        price = p;
        
        cout <<"Name:" << name << endl;
        cout <<"Price:" << price <<endl;

    }

    ~Car(){
        cout <<"Destructor called!"<<endl;
    }


};
    int main(){
        Car c("Honda",5000000);
        
        return 0;
    }