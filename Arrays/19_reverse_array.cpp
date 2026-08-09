//Lab-Assignment-1, question - 4(A)
// a. Reverse the elements of an array

#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int N){

    int l = 0;
    int r = N - 1;

    cout << "Original array: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    while(l < r){
        swap(arr[l], arr[r]);
        l++;
        r--;
    }

    cout << "Reversed array: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {1, 2, 3, 3, 4, 5};
    int N = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, N);

    //This is the optimal approach to reverse an array

    //Time complexity = O(N/2) equal to O(N){after ignoring constants} [O(N) for printing original and reversed ignored]
    //Space complexity = O(1)

    return 0;
}