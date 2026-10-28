#include <iostream>
using  namespace std;

class Student
{
    public:
       static int count;
};

    int Student::count = 0;
    int main()
 {
        Student s1;
        Student s2;

        Student::count = 2;
        cout << Student::count;
        return 0;
 }