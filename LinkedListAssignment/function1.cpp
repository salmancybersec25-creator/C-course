#include <iostream>
using namespace std;

// ─────────────────────────────────────────────────────
//  THE FUNCTION — a vending machine called "add"
// ─────────────────────────────────────────────────────
int add(int a, int b) {          // takes 2 int coins, gives back 1 int
    int result = a + b;          // do the work: add the two coins
    return result;               // drop the snack out — this is the answer
}

// ─────────────────────────────────────────────────────
//  MAIN — the program where we USE the machine
// ─────────────────────────────────────────────────────
int main() {
    int answer1 = add(3, 5);     // insert 3 and 5 → snack = 8 comes out
    int answer2 = add(10, 20);   // insert 10 and 20 → snack = 30
    int answer3 = add(-4, 4);    // insert -4 and 4 → snack = 0

    cout << "3 + 5   = " << answer1 << endl;    // prints 8
    cout << "10 + 20 = " << answer2 << endl;    // prints 30
    cout << "-4 + 4  = " << answer3 << endl;    // prints 0

    return 0;
}