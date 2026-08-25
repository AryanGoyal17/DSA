// // Maximum Subarray Sum - Leetcode #53

// // Brute - O(N^3) - tc, O(1) - sc -- done
// // Better - O(N^2) - tc, O(1) - sc

//*****Below is the BETTER SOLUTION*******//

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n = nums.size();
//         int max_sum = INT_MIN;

//         for(int i = 0; i < n; i++){
//             int sum = 0;
//             for(int j = i; j < n; j++){

//                 sum += nums[j];
//                 max_sum = max(sum, max_sum);
//             }
            
//         }

//         return max_sum;
//     }
// };

#include <bits/stdc++.h>
using namespace std;

int main(){
    return 0;
}