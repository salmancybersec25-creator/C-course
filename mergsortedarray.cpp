#include <iostream>
using namespace std;
int main()
{
    int A[] = {1, 4, 7};
    int B[] = {2, 3, 8};
    int C[6];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < 3 && j < 3)
    {
        if (A[i] < B[i]){
            C[k] = A[i];
            i++;
        }
        else {
           C[k] = B[j];
           j++;
        }
        k++;
    }
    while (i < 3)
    {
        C[k] = A[i];
        i++;
        k++;
    }
    while (j < 3)
    {
        C[k] = A[i];
        j++;
        k++;
    }
    cout << "Merged Array: "<< endl;
    for (int x = 0; x < 6; x++)
    {
       cout << C[x]<<" ";
    }
    return 0;
}