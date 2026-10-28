#include <iostream>
using namespace std;

class Car
{
    private:
       void engineStart()
       {
         cout << "Engine is Starting... " << endl;
       }
    public:
       void start()
       {
         engineStart();

         cout << "Car Started " << endl;
       }
};

int main()
{
    Car car;
    car.start();
    return 0;
}