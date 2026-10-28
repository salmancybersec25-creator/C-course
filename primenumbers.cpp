#include <iostream>
using namespace std;
bool primenum(int n){
    
    for (int i = 2; i < n; i++){
      if (n % i == 0)
    return false;
    }
   
    return primenum;

}
   int main (){
       
        cout <<"These are Prime numbers from 2 to 50."<<endl;
       for (int i =2; i <= 50; i++){
        if (primenum(i))
        cout << i << " ";
       }

        return 0;
   }