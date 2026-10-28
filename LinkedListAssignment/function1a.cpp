#include <iostream>
using namespace std;

int square(int n){
     int result = n * n;
    return result;
}

int main()
{
    cout << "The square of 5 is: " << square(5) << endl;

    return 0;
}