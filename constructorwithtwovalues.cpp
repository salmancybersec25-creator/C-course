#include <iostream>
using namespace std;
class Student{
    public:
          string name;
          int age;

          Student(string n, int a)
          {
            name = n;
            age = a;
          }

};
int main(){
  Student s1("Salman ", 20);
  
  cout << s1.name << s1.age << endl;

}