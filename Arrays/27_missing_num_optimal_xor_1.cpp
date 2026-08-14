// Missing Number - Leetcode #268 (optimal-XOR approach)


#include <bits/stdc++.h>
using namespace std;

int missing_num(int arr[], int N){

    int Xor1 = 0;
    for(int i = 1; i <= N; i++){
        Xor1 = Xor1 ^ i;
    }

    int Xor2 = 0;
    for(int i = 0; i < N - 1; i++){
        Xor2 = Xor2 ^ arr[i];
    }

    return Xor1 ^ Xor2;
}

int main(){

    int arr[] = {1, 2, 4, 5};
    int N = 5;

    int missing = missing_num(arr, N);

    cout << "Missing number = " << missing;

    //Time complexity = O(2N) -- but still considered better than sum-optimal as integer overflow happens there
    //Space complexity = O(1)

    return 0;
}