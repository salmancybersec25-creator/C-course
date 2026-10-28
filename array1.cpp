#include <iostream>
using namespace std;
int main()
{
    int marks [5];
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
    // cout << sizeof(marks) / sizeof (int)<< endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
    }
}        