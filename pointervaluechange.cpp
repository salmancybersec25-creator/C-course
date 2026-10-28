#include <iostream>
using namespace std;

int main(){
    int age = 30;
    int *ptr = &age;
    *ptr = 40;

    cout << age << endl;
}