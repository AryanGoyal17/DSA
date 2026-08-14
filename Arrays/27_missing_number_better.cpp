// Missing Number - Leetcode #268 (better - hashing)

#include <bits/stdc++.h>
using namespace std;

int missing_num(int arr[], int N){

    int num;

    vector <int> hash(N + 1, 0);

    for(int i = 0; i < N - 1; i++){
        hash[arr[i]]++;
    }

    for(int i = 1; i < N + 1; i++){
        if(hash[i] == 0){
            num = i;
            break;
        }
    }

    return num;
}

int main(){

    int arr[] = {1, 2, 4, 5};
    int N = 5;

    int missing = missing_num(arr, N);

    cout << "Missing number = " << missing;

    //Time complexity = O(2*N)
    //Space complexity = O(N) -- auxiliary space

    return 0;
}