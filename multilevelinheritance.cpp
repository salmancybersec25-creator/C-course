#include <iostream>
using namespace std;

class Animal
{
    public:
        void eat()
        {
            cout << "Eating" << endl;
        }
};

class Dog
{
    public:
        void bark()
        {
            cout << "Barking" << endl;
        }
};

class Puppy
{
    public:
        void play()
        {
            cout << "Playing" << endl;
        }
};

int main()
{
    Puppy p1;
    Dog d1;
    Animal a1;
    d1.bark();
    p1.play();
    a1.eat();
}