// Longest subarray with sum k(+ve's) (find length) -- optimal

// Uses 2-pointer + greedy algo + sliding window [this works only when array has +ve integers]

#include <bits/stdc++.h>
using namespace std;

int solution(int arr[], long long k, int N){

    int left = 0;
    int right = 0;
    long long sum = arr[0];
    int max_length = 0;

    while(right < N){

        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }

        if(sum == k){
            max_length = max(max_length, right - left + 1);
        }

        right++;
        if(right < N){
           sum += arr[right];
        }
    }

    return max_length;
}

int main(){

    int arr[] = {1, 2, 2, 3, 4, 5, 5, 2, 2, 7};

    long long k;
    cout << "Enter k: ";
    cin >> k;

    int N = sizeof(arr) / sizeof(arr[0]);

    int result = solution(arr, k, N);

    cout << "Length of longest subarray with sum k: " << result << endl;

    //Time complexity -- O(2*N) [important to understand this!!]
    //Space complexity -- O(1)

    return 0;
}