#include <iostream>
using namespace std;

class Animal
{
    virtual void sound() = 0;

};

class Dog : public Animal
{
    public:
       void sound()
       {
         cout << "Bark" << endl;
       }
};

int main ()
{
    Dog d1;      //we can not create object directly from abstract class but we can create from derived.
    d1.sound();
}