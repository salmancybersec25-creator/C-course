#include <iostream>
using namespace std;


class Count {
    static int c;

    public:
       Count(){
          c++;
       }

    static void show(){
        cout << "Number of objects:" << c << endl;
    }
};
    int Count::c = 0;
    
    int main(){
        Count c1,c2,c3;
        Count::show();
    }