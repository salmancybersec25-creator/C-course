#include <iostream>
using namespace std;

class Number 
{
    public:
       int value;

       bool operator!= (Number n)
       {
        return value != n.value;
       }

};

int main()
{
    Number n1, n2;
    n1.value = 10;
    n2.value = 20;

    cout << (n1 != n2);
    return 0;
}