// Deletion of an element at a particular index -- Method-1

#include <bits/stdc++.h>
using namespace std;

void deletion(int arr[], int N, int index){

    for(int i = index; i < N - 1; i++){
        arr[i] = arr[i + 1];
    }
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};

    int N = sizeof(arr) / sizeof(arr[0]);

    int index;
    cout << "Enter the index of elem you want to delete: ";
    cin >> index;

    cout << "Array before deletion: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    deletion(arr, N, index);

    cout << "Array after deletion: ";
    for(int i = 0; i < N - 1; i++){
        cout << arr[i] << " ";
    }

    //Time complexity -- O(N)
    //Space complexity -- O(1) [auxiliary space], O(1) = input space currently
    //                 -- O(N)[i/p space, if array of N elements is taken as input instead of initializing directly

    return 0;
}