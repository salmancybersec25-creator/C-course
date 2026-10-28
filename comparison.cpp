#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double num = 5.7;

    cout <<"Orignal:"<< num << endl;
    cout <<"Truncate:"<< (int)num << endl;
    cout <<"Round:"<< round(num) << endl;
    return 0;
}