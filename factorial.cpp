#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Enter a non negative integer:";
    cin >> n;

    if (n < 0)
    {
        cout << "factorial does not exist for negative numbers." << endl;
    }
     else
     {
        double factorial = 1;
        for (int i = 1; i <= n; i++) {
          factorial *= i;
     }
      cout << "Factorial of " << n << " = " << factorial << endl;
      }
      return 0;
}