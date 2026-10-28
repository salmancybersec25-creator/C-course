#include <iostream>
using namespace std;

int main(){
    int marks[5]={20,30,40,50,60};
    int largest = marks[0];

    for (int i = 1; i < 5; i++)
    {
        if (marks[i] > largest)
        {
            largest = marks[i];
        }
    }
        cout <<"largest = "<< largest << endl;
        return 0;
}