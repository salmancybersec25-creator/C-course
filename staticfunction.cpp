#include <iostream>
using namespace std;

class Student
{
    public:
       static void Hello()
       {
         cout << "Hello" << endl;
       }
};

 int main ()
 {
    Student::Hello();
 }