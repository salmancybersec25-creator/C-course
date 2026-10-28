#include <iostream>
using namespace std;

int main(){
    // int arr[] = {1,2,3,4,5};
    // int a = 15;
    // cout << *arr << endl;   //arr is pointer in c++
    // return 0;
    
    // int arr[] = {1, 2, 3, 4, 5};
    // cout << *arr << endl;
    // cout << *(arr+1) << endl;
    //  cout << *(arr+2) << endl;
    //   cout << *(arr+3) << endl;
    //   return 0;


   // subtraction

//    int arr[] = {1, 2, 3, 4, 5};
//    int * ptr2;
//    int * ptr1 = ptr2 + 2;
//    cout << ptr1 - ptr2 << endl;
//    return 0;


// int arr[] = {1, 2, 3, 4, 5};
// int *ptr1;
// int *ptr2;

// cout << ptr1 << endl;
// cout << ptr2 << endl;
// cout << (ptr1  < ptr2) << endl;
// return 0;



//test output

int arr[] = {10, 20, 30, 40, 50};
int* ptr = arr;
 
cout << *(ptr + 1) << endl;
cout << *(ptr + 2) << endl;
ptr ++;
cout << *ptr << endl;
return 0;


}