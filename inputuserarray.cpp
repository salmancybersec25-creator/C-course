#include <iostream>
using namespace std;

int main(){
    int marks[3];
    for (int i = 0; i < 3; i++)
    {
    cin >> marks[i];
    }
    for(int i = 0; i < 3; i++)
        cout << marks[i] << endl;
    return 0;
}