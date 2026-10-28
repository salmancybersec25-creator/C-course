#include <iostream>
using namespace std;

class Student
{
    public:
       
       Student()
       {
        cout << "Created" << endl;
       }

       ~Student()
       {
        cout << "Destroyed"<< endl;
       }
};

int main()
{
    Student s1;
    Student s2;
    return 0;
}