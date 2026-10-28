#include <iostream>
using namespace std;
int main(){
    int a = 49;
    int *ptr = &a;
    cout << ptr <<endl;
    ptr+=2; 
    cout << ptr << endl;
    return 0;
}