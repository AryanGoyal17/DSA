//Reverse an array --- 2 pointer approach(2 parameters)

#include <bits/stdc++.h>
using namespace std;

void fn7(int l, int arr[], int r){

    if(l >= r) return;

    swap(arr[l], arr[r]);
    fn7(l + 1, arr, r - 1); //Stack overflow will still occur even if vectors are used for large N, due to call stack getting filled up

}

int main(){

    int N;
    cout << "Enter no of elements in array: ";
    cin >> N;

    int arr[N]; //Use vectors instead of int arr[N] since this will cause stack overflow for large N

    cout << "Enter array elements: ";
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    fn7(0, arr, N - 1);

    cout << "Reversed Array: ";
    for(int j = 0; j < N; j++){
        cout << arr[j] << " ";
    }

    return 0;

    //Time complexity -- O(N/2) --- approx = O(N)
    //Space complexity -- O(N/2 + N) -- approx = O(N) , N/2 -- fns waiting in call stack(auxiliary space), N = arr of size N(input space) 
    
}


