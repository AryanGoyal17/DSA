// Majority Element-I (Leetcode #169)
// Find the element occuring more than n/2 times where n is size of the array

// Brute -- use nested loops O(N^2) - tc, O(1) - sc

// Better -- use hashing (using hashmap)

#include <bits/stdc++.h>
using namespace std;

int majorityElem(vector <int> &arr, int n){

    unordered_map <int, int> hash;

    for(int i = 0; i < n; i++){
        hash[arr[i]]++;
    }

    for(auto it: hash){
        if(it.second > (n / 2)){
            return it.first;
        }
    }

    return -1;
}

int main(){

    vector <int> arr = {2, 2, 1, 1, 2, 1, 2};
    int n = arr.size();

    int result = majorityElem(arr, n);

    cout << "Majority Element = " << result << endl;

    //Time complexity - O(2*N) - best, avg , O(N^2 + N) - worst [unordered map], for ordered map - O(NlogN) + O(N) - worst
    //Space complexity - O(N) - worst

    return 0;
}