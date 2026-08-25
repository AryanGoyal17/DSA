// Maximum Subarray Sum - Leetcode #53 - optimal

// Kadane's Algorithm + priting the subarray with the largest sum

#include <bits/stdc++.h>
using namespace std;

int max_sum(vector <int> &nums, int n){
        int sum = 0;
        int max_sum = INT_MIN;
        int ansStart = -1;
        int ansEnd = -1;
        int start = 0;

        for(int i = 0; i < n; i++){

            if(sum == 0) start = i;

            sum += nums[i];

            if(sum > max_sum){
                max_sum = sum;
                ansStart = start;
                ansEnd = i;
            }

            if(sum < 0){
                sum = 0;
            }
        }

        //Printing the subarray with largest sum --

        cout << "Subarray with largest sum = ";
        for(int i = ansStart; i <= ansEnd; i++){
            cout << nums[i] << " ";
        }
        cout << endl; 

        return max_sum;
}

int main(){
    
    vector <int> nums = {1, 2, -1, 0, 1, 2, -89, 2, 3};

    int n = nums.size();

    int sum = max_sum(nums, n);

    cout << "Maximum Subarray Sum = " << sum << endl;

    //Time complexity -- O(N)
    //Space complexity -- O(1)

    return 0;
}