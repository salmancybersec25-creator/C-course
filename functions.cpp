#include <iostream>
using namespace std;

//Function definition
// int printHello(){
//   cout <<"hello\n";
//   return 3;
// } 




//Sum of two numbers 
double sum(double a,double b){
        double s = a + b;
        return s;
}

// minimum of 2 num
int minoftwo(int a,int b){  // parameters
        if (a<b)
        return a;
        else {
                return b;
 }
}

int main(){
       
// cout << sum(35.3, 4)<<endl;
// return 0;

cout <<"min = " << minoftwo(5,3)<<endl;  //Arguments
return 0;

}