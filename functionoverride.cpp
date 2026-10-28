// Language: C++
#include <iostream>
#include <string>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function to allow overriding
    virtual void speak() const {
        cout << "The animal makes a sound." << endl;
    }
};

// Derived class 1 - Dog
class Dog : public Animal {
public:
    // Override speak function and add special behavior
    void speak() const override {
        cout << "Woof! The dog barks." << endl;
        // Special twist: Dog also "happily wags tail"
        cout << "*The dog wags its tail happily*" << endl;
    }
};

// Derived class 2 - Cat
class Cat : public Animal {
public:
    // Override speak function with a different special behavior
    void speak() const override {
        cout << "Meow! The cat meows." << endl;
        // Special twist: Cat also purrs
        cout << "*The cat purrs while being cute*" << endl;
    }
};

int main() {
    // Base class pointer can point to any derived class object
    Animal* myAnimal1 = new Dog();
    Animal* myAnimal2 = new Cat();

    // Function overriding in action
    myAnimal1->speak(); // Calls Dog's speak()
    myAnimal2->speak(); // Calls Cat's speak()

    // Cleanup
    delete myAnimal1;
    delete myAnimal2;

    return 0;
}