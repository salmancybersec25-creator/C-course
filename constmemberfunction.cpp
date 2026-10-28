#include <iostream>
using namespace std;

class Test {
    int x;

public:
   Test(int a){
     x = a;
   }

   void display() const {
    cout << "Value of x:" << x << endl;
   }
};
   int main(){
    Test t(10);
    t.display();
   }