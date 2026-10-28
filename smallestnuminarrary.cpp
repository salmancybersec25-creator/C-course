#include <iostream>
using namespace std;
int main()
{
    int nums[] = {3, 23, 35, -222, 32, 11, 23, 45, 67, 89, 90, 100, 600, 700, 800, 900, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000};
    int largest = nums[0];
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        if (nums[i] > largest)
        {
            largest = nums[i];
        }
    }
    cout << "The largest number in the array is: " << largest << endl;
    return 0;
}