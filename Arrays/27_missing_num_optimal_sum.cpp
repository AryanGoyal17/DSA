// Missing Number - Leetcode #268 (optimal-sum approach)

#include <bits/stdc++.h>
using namespace std;

int missing_num(int arr[], int N){

    long long sum = (N * (N + 1)) / 2;

    long long sum_array = 0;

    for(int i = 0; i < N - 1; i++){
        sum_array += arr[i];
    }

    return sum - sum_array;
}

int main(){

    int arr[] = {1, 2, 4, 5};
    int N = 5;

    int missing = missing_num(arr, N);

    cout << "Missing number = " << missing;

    //Time complexity = O(N)
    //Space complexity = O(1)

    return 0;
}