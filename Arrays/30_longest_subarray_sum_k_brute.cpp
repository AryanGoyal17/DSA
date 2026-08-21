// Longest subarray with sum k(+ve's) (find length) -- brute

#include <bits/stdc++.h>
using namespace std;

int solution(int arr[], int k, int N){
    
    int length = 0;

    for(int i = 0; i < N; i++){
        for(int j = i; j < N; j++){
            int sum = 0;
            for(int l = i; l <= j; l++){
                sum += arr[l];
            }
                if(sum == k){
                    length = max(j - i + 1, length);
                }
        }
    }

    return length;
}

int main(){

    int arr[] = {1, 2, 2, 3, 4, 5, 5, 2, 2, 7};

    int k;
    cout << "Enter k: ";
    cin >> k;

    int N = sizeof(arr) / sizeof(arr[0]);

    int result = solution(arr, k, N);

    cout << "Length of longest subarray with sum k: " << result << endl;

    //Time complexity -- O(N^3)
    //Space complexity -- O(1)

    return 0;
}