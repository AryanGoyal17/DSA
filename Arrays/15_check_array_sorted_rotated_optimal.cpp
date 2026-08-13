// Check if array is sorted and rotated (Leetcode #1752) - optimal-O(N)

#include <bits/stdc++.h>
using namespace std;

bool check(int arr[], int N){

    int drops = 0;

    for(int i = 0; i < N; i++){
        if(arr[i] > arr[(i+1) % N]){
            drops++;
        }
    }

    return drops <= 1;
}

int main(){

    int arr[] = {3, 4, 5, 1, 2};
    int N = sizeof(arr) / sizeof(arr[0]);

    if(check(arr, N)){
        cout << "Array is sorted and rotated";
    }
    else{
        cout << "Array is NOT sorted and rotated";
    }

    //Time complexity = O(N)
    //Space complexity = O(1)

    return 0;
}