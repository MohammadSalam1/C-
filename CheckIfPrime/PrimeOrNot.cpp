#include <iostream>
#include <vector>

using namespace std;


bool isPrime(int n){

    for (int i = 2; i <= n / 2; i++) {

        if (n % i == 0){

            return false;

        }

    }


    return true;

}

int countPrimesAtOddIndexes(const vector<int>& values){

    int count = 0;

    for (int i = 1; i < values.size(); i += 2){

        if (isPrime(values[i])){

            count++;

        }

    }

    return count;

}


int main(){


    vector<int> nums = {4, 5, 6, 7, 8, 11};

    cout << "Primes at odd indexes: " << countPrimesAtOddIndexes(nums) << endl;


    return 0;
}