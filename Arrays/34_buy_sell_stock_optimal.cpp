// Buy and sell stocks - leetcode #121 - optimal

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices, int n){

    int min_price = prices[0];
    int profit = 0;

    for(int i = 1; i < n; i++){

        profit = max(profit, prices[i] - min_price);
        min_price = min(min_price, prices[i]);
    }

    return profit;

}

int main(){
    
    vector <int> prices = {7, 1, 5, 3, 6, 4};
    int n = prices.size();

    int result = maxProfit(prices, n);
    cout << "Max profit = " << result;

    //Time complexity = O(N)
    //Space complexity = O(1)

    return 0;
}