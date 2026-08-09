// Lab-Assignment(1) -- question-3

// 3) Design the logic of a program to rotate a 1-D array by K positions.
// e.g., for A = {1,2,3,4,5} and K = 2, the left rotation is {3,4,5,1,2} and the right
// rotation is {4,5,1,2,3}.

#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int N){

    int k;
    cout << "Enter the number of places by which you want to rotate: ";
    cin >> k;

    if(N == 0) return;
    k = k % N;
    if(k == 0) return;

    int temp[k];

    for(int i = 0; i < k; i++){
        temp[i] = arr[i];
    }

    for(int i = k; i < N; i++){
        arr[i - k] = arr[i];
    }

    for(int i = N-k; i < N; i++){
        arr[i] = temp[i - N + k];
    }
}

void rightRotate(int arr[], int N){

    int k;
    cout << "Enter the number of places by which you want to rotate: ";
    cin >> k;

    if(N == 0) return;
    k = k % N;
    if(k == 0) return;

    int temp[k];

    for(int i = N - k; i < N; i++){
        temp[i - N + k] = arr[i];
    }

    for(int i = N - k - 1; i >= 0; i--){
        arr[i + k] = arr[i];
    }

    for(int i = 0; i < k; i++){
        arr[i] = temp[i];
    }
}

int main(){

    int arr[] = {1, 2, 3, 3, 4};
    int N = sizeof(arr)/sizeof(arr[0]);

    cout << "1. RIGHT ROTATE" << endl;
    cout << "2. LEFT ROTATE" << endl;

    int choice;
    cout << "Enter your choice(1/2): ";
    cin >> choice;

    if(choice == 1){
        rightRotate(arr, N);
    }
    else if(choice == 2){
        leftRotate(arr, N);
    }
    else{
        cout << "Invalid choice!!" << endl;
        return 0;
    }

    cout << "Array after rotation: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    return 0;
}