#include <iostream>
using namespace std;

class Bank {
    private:
       int salary;

    public:
       void setsalary(int s){
        salary = s;
       }

       int getsalary(){
        return salary;
       }
};
    int main(){
        Bank b;
        b.setsalary(4000000);
        cout <<"Salary:" << b.getsalary();
    }