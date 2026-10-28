#include <iostream>
using namespace std;
// void changeA(int a) {   //pass by value
// //     a = 20;
// }


// void changeA (int* ptr){     //pass by reference using pointers
//     *ptr = 20;
// }

  void changeA (int &b){     //pass by reference using alias
    //here & is not address, alias.
        b = 20;
  }
       



int main(){
    // int a = 43;
    // int* ptr = &a;
    // int** parptr= &ptr;
    // cout << &a << endl;
    // cout << &ptr << endl;
    // cout << *(&a) << endl;
    // cout << *(ptr) << endl;
    // cout << *(parptr) << endl;
    // cout << a << endl;
    // return 0;

    // predict Output
    // int a = 5;
    // int *p = &a;
    // int **q = &p;

    // cout << *p << endl;
    // cout << **q << endl;
    // cout << p << endl;
    // cout << *q << endl;
    // return 0;
 
    //  int a = 10; 
    //  changeA(a);                 //pass by value
    //  cout << "inside main fnx: " << a << endl;
    //  return 0;


    //    int a = 10;            //pass by referene
    //    changeA (&a);

    //    cout << "inside main fnx:"<< &a << endl;
    //    return 0;
       

    int a = 10;
    changeA(a);
    cout << "inside main fnx:"<< a << endl;
       return 0;

}