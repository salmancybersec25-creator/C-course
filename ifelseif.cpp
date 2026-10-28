#include <iostream>
using namespace std;
int main(){
    int marks;
    cout <<"Enter your marks"<<endl;
    cin>>marks;
    if (marks >= 80){
         cout <<"Grade A:"<<endl;
    }
        else if (marks >=50){
         cout <<"you are pass:"<<endl;
    }
        else if (marks >= 0){
         cout <<"You are fail:"<<endl;
    }
        else {
            cout <<"Invlid input:"<<endl;
        }
         return 0;
}