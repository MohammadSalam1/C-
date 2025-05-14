#ifndef ACCOUNT_H
#define ACCOUNT_H

class bankAccount {
public:
    bankAccount(int amount);
    void deposit(int amount);
    void withdraw(int amount);
    void transfer(bankAccount& recipient,int amount);
    int currentBalance() const;


private:
    int balance;

};

#endif //ACCOUNT_H
