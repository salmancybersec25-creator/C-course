#include <iostream>
using namespace std;

// Takes a COPY — changes are lost when function returns
void changeCopy(int x) {
    cout << "  [inside changeCopy] before: x = " << x << endl;
    x = 100;
    cout << "  [inside changeCopy] after:  x = " << x << endl;
}

// Takes the ORIGINAL — changes persist after function returns
void changeReal(int& x) {
    cout << "  [inside changeReal] before: x = " << x << endl;
    x = 100;
    cout << "  [inside changeReal] after:  x = " << x << endl;
}

int main() {
    int a = 5;

    cout << "=== Pass by VALUE (copy) ===\n";
    cout << "  [in main] before call: a = " << a << endl;
    changeCopy(a);
    cout << "  [in main] after call:  a = " << a << endl << endl;

    cout << "=== Pass by REFERENCE (original) ===\n";
    cout << "  [in main] before call: a = " << a << endl;
    changeReal(a);
    cout << "  [in main] after call:  a = " << a << endl;

    return 0;
}