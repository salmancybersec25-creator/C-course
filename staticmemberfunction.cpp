#include <iostream>
using namespace std;

class Student
{
    public:
       static void hello()
       {
        cout <<"Hello";
       }
};

int main()
{
    Student::hello();
    return 0;
}