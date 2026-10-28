#include <iostream>
using namespace std;

int main(){
    try
    {

      throw 1;
    } 
    catch(int error)
    {
        cout << "An Error happened" << endl;
    }
    return 0;
      
}