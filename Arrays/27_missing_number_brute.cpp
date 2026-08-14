// Missing Number - Leetcode #268 (brute)

#include <bits/stdc++.h>
using namespace std;

int missing_num(int arr[], int N){

    int size = N-1;

    vector <int> check(N);
    int num;

    int val = 1;
    for(int i = 0; i < N; i++){
        check[i] = val;
        val++;
    }


    for(int i = 0; i < N; i++){

        int found = 0;

        for(int j = 0; j < size; j++){
            if(check[i] == arr[j]){
                found = 1;
            }
        }

        if(found == 0){
            num = check[i];
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

    //Time complexity = O(N^2)
    //Space complexity = O(N) - auxiliary space

    return 0;
}