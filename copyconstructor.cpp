#include <iostream>
using namespace std;

class Student
{
  public:
    int age;

    Student (int a)
    {
        age = a;
    }

    Student(Student &s)
    {
        age = s.age;
    }
};

int main()
{
    Student s1(38);
    Student s2(s1);
    
    cout << s2.age;
}