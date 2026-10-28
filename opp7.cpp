#include <iostream>
using namespace std;

class Animal
{
    public:
       void eat()
       {
         cout << "Animal is eating " << endl;
       }
};

class Dog : public Animal
{
    public:
       void bark()
       {
         cout << "Dog is barking " << endl;
       }
};

class Cat : public Animal
{
    public:
       void meow()
       {
         cout << "Cat is meowing " << endl;
       }
};

int main()
{
    Dog d1;
    Cat c1;

    d1.eat();
    d1.bark();

    cout << endl; 

    c1.eat();
    c1.meow();

    return 0;
}    