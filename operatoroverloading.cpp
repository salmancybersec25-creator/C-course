#include <iostream>
using namespace std;

class Number 
{
    public:
       int value;
       Number operator+(Number n)
       {
       Number result;
       result.value = value + n.value;
       return result;
       }
 };

 int main()
 {
    Number n1, n2, n3;
    n1.value = 20;
    n2.value = 40;

    n3 = n1 + n2;
    cout << n3.value;
    return 0;
 }