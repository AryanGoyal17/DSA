//Question -- 
// Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

// There may be duplicates in the original array.

// Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.

 

// Example 1:

// Input: nums = [3,4,5,1,2]
// Output: true
// Explanation: [1,2,3,4,5] is the original sorted array.
// You can rotate the array by x = 2 positions to begin on the element of value 3: [3,4,5,1,2].

// Example 2:

// Input: nums = [2,1,3,4]
// Output: false
// Explanation: There is no sorted array once rotated that can make nums.



//Brute-Solution ---

// class Solution {
// public:

//     int pivot(vector <int> &nums, int N){

//         int pivot_index = -1;

//         for(int i = 1; i < N; i++){
//             if(nums[i - 1] > nums[i]){
//                 pivot_index = i;
//                 break;
//             }
//         }
//         return pivot_index;
//     }
//     bool check(vector<int>& nums) {
        
//         int N = nums.size();

//         int index = pivot(nums, N);

//         if(index == -1) return true;

//         int p1 = index - 1;
//         int p2 = index + 1;

//         for(int i = p1 - 1; i >= 0; i--){
//             if(nums[i] > nums[i + 1]){
//                 return false;
//             }
//         }

//         for(int i = p2; i < N; i++){
//             if(nums[i] < nums[i - 1]){
//                 return false;
//             }
//         }

//         p1 = index - 1;
//         p2 = index;

//         while(p2 < N){

//             while(p1 >= 0){
//                 if(nums[p1] < nums[p2]){
//                     return false;
//                 }
//                 p1--;
//             }

//             p1 = index - 1;
//             p2++;
//       }

//       return true;        
//     }
// };

//Time complexity = O(N^2)
//Space complexity = O(1)