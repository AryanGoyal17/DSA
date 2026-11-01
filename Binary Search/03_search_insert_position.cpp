// Search Insert Position

// If found return index
// If NOT found, return index where it would be if placed in sorted order

//NOTE -- Its just finding lower bound

// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int low = 0; 
//         int high = nums.size() - 1;

//         int answer = nums.size();

//         while(low <= high){
//             int mid = low + (high - low) / 2;

//             if(nums[mid] < target){
//                 low = mid + 1;
//             }
//             else{
//                 answer = mid;
//                 high = mid - 1;
//             }
//         }

//         return answer;
//     }
// };

#include <bits/stdc++.h>
using namespace std;

int main(){

    // Time complexity -- O(logN)
    // Space complexity -- O(1)
}