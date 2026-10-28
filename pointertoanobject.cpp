#include <iostream>
using namespace std;

class Student
{
    public:
       int age;
};

int main()
{
    Student s1;
    s1.age = 20;
    Student *ptr = &s1;
    cout << ptr->age;
    return 0;
}