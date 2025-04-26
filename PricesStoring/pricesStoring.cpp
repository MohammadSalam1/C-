#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<double> prices;
    double tempPrice = 0;

    while (prices.size() < 5){

        cout << "insert a positive value" << endl;
        cin >> tempPrice;

        if(tempPrice < 0){
            break;
        } else {

            prices.push_back(tempPrice);
        }


    }

    return 0;

}
