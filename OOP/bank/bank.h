#ifndef BANK_BANK_ACCOUNT_AND_BANK_H
#define BANK_BANK_ACCOUNT_AND_BANK_H
#include <string>
#include <vector>

class bank_account {
public:

    // constructor
    bank_account(std::string acc_num, std::string acc_name, double money );

    // if the amount is positive then add it to the balance and return true
    // if the amount is zero or negative, do nothing and return false
    bool deposit(double amount);

    // compare and if the amount taken out is equal or less
    // than what's in the account then withdraw and return true
    // if its too much, return false
    bool withdraw(double amount);

    // should return how much in the account when called
    double get_balance() const;

    // return the account number [self-explanatory]
    std::string get_account_number() const;


private:

    // each account needs an identification number
    // this provides that to an account
    std::string account_number;

    // the account will hold a name to
    // add another identification feature/security
    std::string owner_name;

    // double holds more digits/bits than int
    // also double like float takes fractional numbers
    double balance;
};

class bank {
public:

    bank();

    // create and add account to the container
    void add_account(const bank_account&);

    // adds money to the specified account
    bool deposit_to_account(const std::string& account_number, double amount);

    // takes out money from the specified account
    bool withdraw_from_account(const std::string& account_number, double amount);

    // returns the total balance of all accounts in the bank
    double get_total_balance() const;

private:

    // container to add our accounts in
    std::vector<bank_account> accounts;
};


#endif //BANK_BANK_ACCOUNT_AND_BANK_H