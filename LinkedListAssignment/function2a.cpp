#include <iostream>
using namespace std;


 void swap(int& a, int& b) {
    // HINT: you need a temporary variable
    int temp = a;
    a = b;
    b = temp;
}


int main() {
    int x = 10, y = 20;
    cout << "Before: x=" << x << ", y=" << y << endl;   // x=10, y=20
    swap(x, y);
    cout << "After:  x=" << x << ", y=" << y << endl;   // x=20, y=10
    return 0;
}