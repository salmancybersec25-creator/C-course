#include <iostream>
using namespace std;

class Student 
{
    private:
        int age  = 20;

    public:
        friend void showAge(Student s); 

};
  
    void showAge(Student s)
    {
        cout << s.age;

    }

int main ()
{
    Student s1;
    showAge(s1);
}