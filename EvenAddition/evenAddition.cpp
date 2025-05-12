#include <iostream>

using namespace std;

int evenAddition(int n){

    int sum = 0;

    while(n > 0){

        int digit = n % 10;

        if(digit % 2 == 0){

            sum += digit;

        }

        n /= 10;

    }

    return sum;

}


int main(){

    int num;

    cout << "Enter a positive number: ";

    cin >> num;

    cout << "sum of even numbers in num = " << evenAddition(num);



    return 0;

}