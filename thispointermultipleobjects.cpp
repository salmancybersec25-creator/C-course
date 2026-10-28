#include <iostream>
using namespace std;

class Student
{
    public:
       int age;
       void setAge(int age)
       {
        this->age = age;
       }
};

int main()
{
    Student s1;
    Student s2;
    s1.setAge(20);
    s2.setAge(30);

    cout << s1.age;
    cout << endl;

    cout << s2.age;
}