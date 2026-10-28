#include <iostream>
using namespace std;
void changeArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 3* arr[i];
    }
}
int main(){
    
        int arr[]= {1, 3, 4};
        changeArray(arr, 3);
        cout << "The value of arr[0] is " << arr[0] << endl;
        cout << "The value of arr[1] is " << arr[1] << endl;
        cout << "The value of arr[2] is " << arr[2] << endl;

        return 0;
}
