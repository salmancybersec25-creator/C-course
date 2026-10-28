#include <iostream>
using namespace std;
class Animal
{
public:
   void sound()
   {
      cout << "Animal sound ";
   }
};

class Dog : public Animal
{
    public:
       void sound()
       {
          cout << "Bark ";
       }
};

int main(){
    Dog d1;
    d1.sound();
}