//Traversal in an array 

#include <bits/stdc++.h>
using namespace std;

void traversal(int arr[], int N){

    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};

    int N = sizeof(arr) / sizeof(arr[0]);

    traversal(arr, N);

    //Time complexity -- O(N)
    //Space complexity -- O(1) [auxiliary space], O(5) = O(1) = input space currently
    //                 -- O(N)[i/p space, if array of N elements is taken as input instead of initializing directly

    return 0;
}