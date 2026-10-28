#include <iostream>
using namespace std;

class Car{

    public:
    string name;
    int seats;
    float price;

    Car(){

    }

    Car(string n,int s,float p){
     name = n;
     seats = s;
     price = p;

    }

};
     
    int main(){
         Car c1("Toyota",4,2500000);
        //  c1.name = "Toyota";
        //  c1.seats = 4;
        //  c1.price = 25000000;

        //  cout << c1.name <<" "<< c1.seats <<" " << c1.price<<endl;
        
        Car c1;
  
        

    }