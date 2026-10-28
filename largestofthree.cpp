#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "Enter any three numbers:" << endl;
    cin >> a >> b >> c;
    if (a > b && b > c)
    {
    cout << "A is the largest:" << endl;
    }
    else if (b > a && b > c)
    {
        cout << "B is the largest:" << endl;
    }
    else {
        cout << "C is the largest:" << endl;
    }
    return 0;
}