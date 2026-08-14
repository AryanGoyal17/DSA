// Missing Number - Leetcode #268 (brute - optimized space)

#include <bits/stdc++.h>
using namespace std;

int missing_num(int arr[], int N){

    int size = N-1;
    int num;

    for(int i = 1; i <= N; i++){

        int found = 0;

        for(int j = 0; j < size; j++){
            if(arr[j] == i){
                found = 1;
                break;
            }
        }

        if(found == 0){
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

    //Time complexity = O(N^2)
    //Space complexity = O(1)

    return 0;
}