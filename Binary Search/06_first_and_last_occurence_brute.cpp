// First and Last occurence in array -- Leetcode #34 -- Linear search

#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {5, 7, 7, 8, 9, 9};
    int target = 8;
    int n = sizeof(arr) / sizeof(arr[0]);

    int first_index = -1;
    int second_index = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            if(first_index == -1){
                first_index = i;
            }
            second_index = i;
        }
    }

    cout << first_index << " " << second_index << endl;

    // Time complexity -- O(N)
    // Space complexity -- O(1)

    return 0;
}