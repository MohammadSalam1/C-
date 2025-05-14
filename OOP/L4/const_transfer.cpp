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

    void transfer(bankAccount& recipeint, int amount){
        if(amount > 0 && amount <= balance){
            withdraw(amount);
            recipeint.deposit(amount);
        }
    }

private:
    int balance;

};

int main(){

    bankAccount a1(500);
    bankAccount a2(100);


    a1.transfer(a2, 200);

    cout << a1.currentBalance() << endl;
    cout << a2.currentBalance() << endl;

    return 0;
}