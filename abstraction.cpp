#include <iostream>
using namespace std;

class Car
{
    public:
       void start()
       {
          cout << "Car Started";
       }
};

int main ()
{
    Car c1;
    c1.start();
}