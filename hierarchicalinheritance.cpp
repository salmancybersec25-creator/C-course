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
 
class Dog : public Animal
{
};

class Cat : public Animal
{
};

int main()
{
    Dog d1;
    Cat c1;
    d1.eat();
    c1.eat();
}