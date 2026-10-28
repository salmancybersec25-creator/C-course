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
        cout << "Destroyed" << endl;
       }
};
 
int main()
{
    Student *ptr = new Student();
    delete ptr;
    return 0;
}