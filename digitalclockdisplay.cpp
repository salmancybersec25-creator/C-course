#include <iostream>
#include <ctime>
using namespace std;

int main() {
//Display current time
time_t now = time(0);
char* dt = ctime(&now);
cout << "current date and time:"<<dt;

//Basic alarm checker
int hour;
cout <<"Enter hour (0-23)";
cin>>hour;
if (hour >= 6 && hour < 12)
cout <<"Good Morning!Time to wake up!"<<endl;
else if (hour >= 12 && hour < 18)
cout << "Good afternoon!"<<endl;
else if ( hour >= 18 && hour < 22)
cout << "Good evening! ";
else
cout << "Time to sleep!"<<endl;
return 0;
}
