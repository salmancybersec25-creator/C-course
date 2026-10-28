#include <iostream>
using namespace std;

class Father
{
    public:
       void Driving()
      {
        cout << "Driving" << endl;
      }
};
 
class Mother
{
    public:
       void Cooking()
       {
         cout << "Cooking" << endl;
       }
};
 
class Child : public Father , public Mother
{

};
  
 int main ()
 {
    Child c1;
    c1.Driving();
    c1.Cooking();
 }