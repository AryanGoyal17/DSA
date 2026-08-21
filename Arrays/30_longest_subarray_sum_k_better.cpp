// Longest subarray with sum k(+ve's) (find length) -- better[hashing]

// THE PREFIX-SUM APPROACH --

// This is the optimal solution for the question when the array has both +ve's and -ve's

#include <bits/stdc++.h>
using namespace std;

int solution(int arr[], long long k, int N){

    map <long long, int> prefixSum_map;
    long long sum = 0;

    int max_length = 0;

    for(int i = 0; i < N; i++){

        sum += arr[i];

        if(sum == k){
            max_length = max(max_length, i + 1);
        }

        int remaining_sum = sum - k;

        if(prefixSum_map.find(remaining_sum) != prefixSum_map.end()){
            int length = i - prefixSum_map[remaining_sum];
            max_length = max(max_length, length);
        }

        // prefixSum_map[sum] = i; //This line of code fails for edge case when zeros are there in the array!!

        if(prefixSum_map.find(sum) == prefixSum_map.end()){
            prefixSum_map[sum] = i;
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

    //Time complexity -- O(N*logN) for map, O(N) [best, avg for unordered], O(N^2) for worst case unordered
    //Space complexity -- O(N)

    return 0;
}