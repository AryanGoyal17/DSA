// Left rotate array by one place

// Brute -- create another dummy array of same size, place elements of arr from index = 1 to n - 1 in temp's 0 to n - 2..
//       -- place arr[0] at temp[n - 1]
//       -- Time complexity = O(N), Space complexity = O(N)


//Optimal Solution --

#include <bits/stdc++.h>
using namespace std;

void RotateArray(int arr[], int N){

    if(N <= 1) return;

    int temp = arr[0];

    for(int i = 1; i < N; i++){
        arr[i - 1] = arr[i];
    }

    arr[N - 1] = temp;
}

int main(){
    
    int arr[] = {-1, 0, 3, 6};
    int N = sizeof(arr) / sizeof(arr[0]);

    RotateArray(arr, N);

    cout << "Array after rotation = ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    //Time complexity = O(N)
    //Space complexity = O(1)

    return 0;
}