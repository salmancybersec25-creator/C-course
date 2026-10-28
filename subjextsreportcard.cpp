#include <iostream>
using namespace std;
int main()
{
    string name;
    int m1, m2, m3, m4, m5;
    int totalMarks;
    float average;

    cout << "Enter the student's name: ";
    cin >> name;
    cout << "Enter the marks obtained by " << name << " "<<  "in five subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    totalMarks = m1 + m2 + m3 + m4 + m5;
    average = totalMarks / 5.0;
    cout << "Total marks: " << totalMarks << endl;
    cout << "Average marks: " << average << endl;
    return 0;
}
