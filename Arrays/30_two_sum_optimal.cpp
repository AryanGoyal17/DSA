// Two Sum -- brute + optimized brute

// T1 - return true/false (pair exists or not)
// T2 - pair exists now return indices

// This is optimal only for T1
// For T2, the better method - hashing is optimal (in this method you need to store the original indices in a map for t2)

#include <bits/stdc++.h>
using namespace std;

bool twoSum(int arr[], int N, int target){

    sort(arr, arr+ N); //Sorting the array

    int left = 0;
    int right = N - 1;

    while(left < right){
        int sum = arr[left] + arr[right];

        if(sum < target){
            left++;
        }
        else if(sum > target){
            right--;
        }
        else return true;
    }
    return false;
}

int main(){

    int arr[] = {2, 5, 3, 9, 1, 4};
    int N = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter the target: ";
    int target;
    cin >> target;

    if(twoSum(arr, N, target)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    //Time complexity = O(N*logN) + O(N) [not O(N/2)]
    //Space complexity = O(1), if distortion is NOT allowed then we need O(N) space

    return 0;
}