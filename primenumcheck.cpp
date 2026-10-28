#include <iostream>
using namespace std;

bool isPrime(int n){
    if (n<1)
    return false;
    for (int i = 2; i < n; i++){
        if (n % i == 0)
        return false;
    }
    return true;

}
   int main (){
    int num;
    cout <<"Entet a number:"<<endl;
    cin>>num;
    if (isPrime(num)){
    cout <<"This is Prime number."<<endl;
    }
    else
    cout <<"This number is not Prime."<<endl;
    return 0;
   }