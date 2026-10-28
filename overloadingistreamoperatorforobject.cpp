#include <iostream>
using namespace std;


class Student
{
    public:
       int age;

       friend istream& operator>>(istream& in, Student& s)
       {
          in >> s.age;
          return in;
       }
};

int main()
{
    Student s1;
    cout << "Enter age";
    cin >> s1;

    cout << "Age:"<< s1.age << endl;

    return 0;
}