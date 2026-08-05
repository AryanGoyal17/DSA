// Remove duplicates in-place from sorted array [Leetcode - #26]

// Brute-force = use set

#include <bits/stdc++.h>
using namespace std;

int remove_dup(vector<int> &nums){

    set <int> s1;

    for(int i = 0; i < nums.size(); i++){
        s1.insert(nums[i]);
    }

    int index = 0;
    for(auto it : s1){
        nums[index] = it;
        index++;
    }

    return index;
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

    //Time complexity = O(N*logN) + O(N)
    //Space complexity = O(N) [creating a new set]
}