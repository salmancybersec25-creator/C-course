#include <iostream>
using namespace std;
class Student{
    public:
          string name;
          Student(string n)
          {
            name = n;

          }
};

int main(){
    Student s1("Salman");
    cout << s1.name;
    return 0;
}