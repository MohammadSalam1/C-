#include <iostream>
#include "bank.h"
#include "bank.cpp"
using namespace std;


int main() {


    bank my_bank;
    my_bank.add_account(bank_account("1001", "Anna", 5000));
    my_bank.add_account(bank_account("1002", "Erik", 3000));

    my_bank.deposit_to_account("1001", 1500);
    my_bank.withdraw_from_account("1002", 500);

    cout << "Totalt saldo i banken: " << my_bank.get_total_balance() << endl;





    return 0;
}