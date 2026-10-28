#include <iostream>
using namespace std;

class Student{
    public:
           string name;
           int age;
};

int main(){
       Student s1;
       s1.name = "Salman";
       s1.age = 20;

       cout << s1.name << endl;
       cout << s1.age << endl;
       return 0;
}       