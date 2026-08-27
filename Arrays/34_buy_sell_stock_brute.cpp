// Buy and sell stocks - leetcode #121 - brute

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices, int n){

        int profit = 0;

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(prices[j] > prices[i]){
                    profit = max(profit, prices[j] - prices[i]);
                }
            }
        }

        return profit;

}

int main(){
    
    vector <int> prices = {7, 1, 5, 3, 6, 4};
    int n = prices.size();

    int result = maxProfit(prices, n);
    cout << "Max profit = " << result;

    //Time complexity = O(N^2)
    //Space complexity = O(1)

    return 0;
}