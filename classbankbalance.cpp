#include <iostream>
using namespace std;

class bankBalance {
    private:
       int balance;

    public:
    //zero argument constructor
    bankBalance() {
        balance = 0;
    }
    //one argument constructor
    bankBalance(int initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
        }
    }  
        //Member functions
        int getbalance() {
            return balance;
        }
         
        void deposit(int amount) {
            if (amount > 0) {
                balance += amount;
            }

        }

        void withdraw(int amount) {
            if (amount <= balance) {
                balance -= amount;
            }
        }
        //overload +operator
        bankBalance operator+(const bankBalance &other) {
            bankBalance temp;
            temp.balance = balance + other.balance;
            return temp;
        }
        bankBalance operator-(const bankBalance &other) {
            bankBalance temp;
            temp.balance = balance - other.balance;
            if (temp.balance < 0) {
                temp.balance = 0;
                return temp;
        }
    }
        //overload == operator
        bool operator==(const bankBalance &other) {
            return balance == other.balance;
        }
        //friend functions for stream operator
        friend ostream& operator<<(ostream& out, const bankBalance &b) {
            out << b.balance;
            return out;
        }
        friend istream& operator>>(istream  &in, bankBalance  &b) {
            int amount;
            if (amount >= 0){
                b.balance = amount;
            } else {
                b.balance = 0;
            }
                return in;
        }
    };

    
       //Example usage and testing
       int main(){
        bankBalance acc1;
        bankBalance acc2(100);
        bankBalance acc3(-50);
         
        cout <<"acc1:"<<acc1.getbalance()<<endl;
        cout <<"acc2:"<<acc2.getbalance()<<endl;
        cout <<"acc3:"<<acc3.getbalance()<<endl;

        acc1.deposit(50);
        cout <<"Ater depositing 50 to acc1:"<<acc1.getbalance()<<endl;
        acc2.withdraw(30);
        cout <<"Ater withdrawing 30 to acc2:"<<acc2.getbalance()<<endl;

        bankBalance acc4 = acc1 + acc2;
        cout <<"acc1 + acc2:"<< acc4.getbalance()<<endl; 
         bankBalance acc5 = acc1 - acc2;
         cout <<"acc1 - acc2:"<< acc5.getbalance()<<endl; 
          
          if (acc1 == acc3)  {
             cout << "acc1 and acc3 are equal:"<< endl;
          }
          bankBalance acc6; 
             cout << "Enter balance for acc6:";
             cin >> acc6;
             cout << "you entered:"<< acc6 << endl;
             return 0;
    }
 