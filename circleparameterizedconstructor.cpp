#include <iostream>
using namespace std;

class Circle {
    float radius;

    public:
       Circle(float r){
        radius = r;
       }
       void area(){
        cout <<"Area:" << radius * radius << endl;
       }
};
    int main(){
        Circle c(5);
        c.area();
        return 0;
    }