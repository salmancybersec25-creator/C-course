#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Array elements are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    int searchElement;
    cout << "\nEnter the element to search: ";
    cin >> searchElement;
    bool found = false;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == searchElement)
        {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}