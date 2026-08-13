// Check if array is sorted and rotated (Leetcode #1752) - optimal-O(N)

#include <bits/stdc++.h>
using namespace std;

int pivot(int arr[], int N){

    int pivot = -1;

    for(int i = 1; i < N; i++){
        if(arr[i] < arr[i - 1]){
            pivot = i;
            break;
        }
    }

    return pivot;
}

bool check(int arr[], int N){

    int pivot_index = pivot(arr, N);

    if(pivot_index == -1) return true;

    int p1 = pivot_index - 1;
    int p2 = pivot_index + 1;

    for(int i = p1 - 1; i >= 0; i--){
        if(arr[i] > arr[i + 1]){
            return false;
        }
    }

    for(int i = p2; i < N; i++){
        if(arr[i] < arr[i - 1]){
            return false;
        }
    }

    p1 = pivot_index - 1;
    p2 = pivot_index;

    if(arr[0] < arr[N - 1]){
        return false;
    }

    return true;

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