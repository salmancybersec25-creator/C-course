#include <iostream>
using namespace std;

class Animal
{
    public:
       virtual void sound()
       {
         cout << "Animal sound" << endl;
       }
};
 
class Dog : public Animal
{
    public:
       void sound()
       {
        cout << "Bark";
       }
};

int main ()
{
    Animal a1;
    Dog d1;
    a1.sound();
    d1.sound();
}