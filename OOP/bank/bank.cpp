#include "bank.h"
using namespace std;

bank_account::bank_account(string acc_num, string acc_name, double money) {
    account_number = acc_num;
    owner_name = acc_name;
    balance = money;
}

bool bank_account::deposit(double amount) {

    if (amount > 0) {
        balance += amount;
        return true;
    }

    return false;
}

bool bank_account::withdraw(double amount) {

    if (amount > 0 && amount <= balance) {

        balance -= amount;
        return true;
    }

    return false;
}

double bank_account::get_balance() const {

    return balance;
}

string bank_account::get_account_number() const {


    return account_number;
}

bank::bank(){}

void bank::add_account(const bank_account& new_account) {

    accounts.push_back(new_account);
}

bool bank::deposit_to_account(const string& account_number, double amount) {

    for (bank_account& account : accounts) {

        if (account.get_account_number() == account_number) {

            return account.deposit(amount);
        }
    }

    return false;
}

bool bank::withdraw_from_account(const string& account_number, double amount) {

    for (bank_account& account : accounts) {

        if (account.get_account_number() == account_number) {

            return account.withdraw(amount);
        }
    }

    return false;
}

double bank::get_total_balance() const {

    double total = 0;
    for (const bank_account& account : accounts) {
        total += account.get_balance();
    }

    return total;
}
