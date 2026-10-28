#include <iostream>
using namespace std;

int bigger(int a, int b){
    if ( a > b ) {
        return a;

    } 
     return b;
    
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "The bigger number is: " << bigger(num1, num2) << endl;
    return 0;
}