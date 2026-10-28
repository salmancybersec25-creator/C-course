#include <iostream>
using namespace std;
int main(){
    int marks[4]={30,40,50,22};
       int smallest = marks[0];
       for (int i = 1; i < 4; i++)
       {
        if (marks[i] < smallest);
          {
            smallest = marks[i];
          }
       }
        cout <<"smallest = " << smallest << endl;
        return 0;

}
                                    

    