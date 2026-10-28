#include <iostream>
using namespace std;
class Student
{
    public:
       string name;
       int age;

       Student(string n, int a)
       {
        name = n;
        age = a;
       }

       void Display ()
       {
         cout << "Name: " << name << endl;
         cout << "Age: " << age << endl;
       }
};

int main ()
{
    Student s1("Ali", 20);
    Student s2("Alam", 28);
    s1.Display();
    s2.Display();
    return 0;
}