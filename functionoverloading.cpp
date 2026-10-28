#include <iostream>
using namespace std;

    void add(int a , int b)
    {
        cout << a + b;
    }
    
    void add(int a, int b, int c)
    {
        cout << a + b + c;
    }

int main (){
    add(5,3);
    cout << endl;
    add(2,3,4);


    return 0;

}