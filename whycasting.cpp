#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 2;
    
    cout <<"Without cast:" << a/b << endl;
    cout <<"With cast;" << (double)a/b;

    return 0;
}