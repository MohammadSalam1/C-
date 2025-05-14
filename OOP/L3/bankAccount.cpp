#include <iostream>
#include <string>

using namespace std;

class bankAccount{

public:
    bankAccount(int amount){
        balance = (amount >= 0) ? amount : 0;

    }

    void deposit(int amount){
        if(amount > 0){
            balance += amount;
        }
    }
    void withdraw(int amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            }
    }

    int currentBalance() const{
        return balance;
    }

private:
    int balance;

};

int main(){

    bankAccount frst(500);

    frst.deposit(150);
    frst.withdraw(200);

    cout << frst.currentBalance() << endl;

return 0;
}