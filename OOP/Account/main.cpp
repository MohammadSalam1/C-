#include <iostream>
#include "Account.h"
#include "Account.cpp"

using namespace std;

int main(){

    bankAccount a1(500);
    bankAccount a2(200);

    a1.transfer(a2, 100);

    cout << "a1 has: " << a1.currentBalance() << " in his bank account" << endl;
    cout << "a2 has: " << a2.currentBalance() << " in his bank account" << endl;


return 0;
}