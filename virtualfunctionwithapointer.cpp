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
            cout << "Bark" << endl;
        }
};

int main()
{
    Dog d1;
    Animal *ptr = &d1;
    ptr->sound();
}