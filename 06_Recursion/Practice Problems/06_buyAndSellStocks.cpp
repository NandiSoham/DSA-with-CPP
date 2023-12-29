#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void findMaxProfit (vector<int> &prices, int i, int &minPrice, int &maxProfit){
        //base case
        if(i == prices.size()) return;

        // 1 case solve kar do
        if(prices[i] < minPrice){
            minPrice = prices[i];
        }

        int todaysProfit = prices[i] - minPrice;
        if(todaysProfit > maxProfit){
            maxProfit = todaysProfit;
        }

        // baaki recursion sambhal lega
        findMaxProfit (prices, i+1, minPrice, maxProfit);
    }

int main(){
    vector<int> prices{7,1,5,3,6,4};
    int minPrice = INT_MAX;
    int maxProfit = INT_MIN;

    findMaxProfit(prices, 0, minPrice, maxProfit);
    cout << "Maximum Profit: " << maxProfit << endl;

    return 0;
}