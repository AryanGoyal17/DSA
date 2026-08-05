// Remove duplicates in-place from sorted array [Leetcode - #26]

// Optimal solution - 2 pointer approach

#include <bits/stdc++.h>
using namespace std;

int remove_dup(vector<int> &nums){

    int l = 0;

    for(int r = 1; r < nums.size(); r++){
        if(nums[r] != nums[l]){
            nums[l + 1] = nums[r];
            l = l + 1;
        }
    }

    return l + 1;

    //NOTE:
    //Running the loop from i = 0 to i < nums.size() - 1 is also correct but it results in integer underflow for empty array case
    //and also an extra variable..

}

int main(){

    vector <int> nums = {1, 2, 2, 3, 3, 4, 4, 4, 5};
    int k = remove_dup(nums);

    cout << "Array after transformation = ";
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }

    cout << endl;
    cout << "Num of unique elements = " << k << endl;

    //Time complexity = O(N)
    //Space complexity = O(1)
}