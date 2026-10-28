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
    s1.setAge(20);
    cout << s1.age << endl;
    return 0;
}