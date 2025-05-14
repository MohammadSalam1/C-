#include "Account.h"

bankAccount::bankAccount(int amount){

    balance = (amount >= 0) ? amount : 0;

}

void bankAccount::deposit(int amount){

    if(amount > 0){
        balance += amount;
    }

}

void bankAccount::withdraw(int amount){

    if(amount > 0 && amount <= balance){
        balance -= amount;
    }

}

void bankAccount::transfer(bankAccount& recipient, int amount){

    if(amount > 0 && amount <= balance){

        withdraw(amount);
        recipient.deposit(amount);

    }

}

int bankAccount::currentBalance() const{

    return balance;

}