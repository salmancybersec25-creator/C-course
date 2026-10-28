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
           Student s2("khan");

           cout << s1.name << endl;
           cout << s2.name << endl;
           return 0; \
           
}