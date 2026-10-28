#include <iostream>
using namespace std;

class Animal
{
    public:
       virtual void sound() = 0;
       virtual void move() = 0;
};

class Cat
{
    public:
    void sound()
    {
        cout << "Meoo" << endl;
    }
    void move()
    {
        cout << "Run" << endl;
    }
};

int main ()
{
    Cat c1;
    c1.sound();
    c1.move();
}