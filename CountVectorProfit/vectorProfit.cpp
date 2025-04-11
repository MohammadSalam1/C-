#include <iostream>
#include <vector>
using namespace std;

// No const in parameter list
void computeMaxProfit(vector<int>& prices, int& result) {
    if (prices.size() < 2) {
        result = 0;
        return;
    }

    int minPrice = prices[0];
    int maxProfit = 0;

    for (size_t i = 1; i < prices.size(); i++) {
        int profit = prices[i] - minPrice;
        if (profit > maxProfit) {
            maxProfit = profit;
        }
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }

    result = maxProfit;
}

int main() {
    vector<int> dailyPrices;
    int input;

    cout << "Enter daily prices (type -1 to finish):" << endl;

    while (cin >> input && input != -1) {
        dailyPrices.push_back(input);
    }

    int maxProfit;
    computeMaxProfit(dailyPrices, maxProfit);

    cout << "Max profit: " << maxProfit << endl;

    return 0;
}
