#include <iostream>
using namespace std;

class Student
{
    public:
       int age;
       Student(int a)
       {
         age = a;
       }

       friend ostream& operator<<(ostream& out, Student s)
       {
          out << s.age;
          return out;
       }
};

int main()
{
    Student s1(20);

    cout << s1;

    return 0; 
}