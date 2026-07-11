// Bubble Sort -- push the max[for asc order]/min[for desc order] to the last by adjacent swaps

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector <int> &arr, int n){

    for(int i = n-1; i >= 1; i--){

        int swap_no = 0;

        for(int j = 0; j <= i-1; j++){

            if(arr[j] > arr[j + 1]){ //replace > with < for descending order
              swap(arr[j], arr[j+1]);
              swap_no = 1;
            } 
        }

        if(swap_no == 0) break;
    }

}

int main(){

    int N;
    cout << "Enter the no of elements in the array: ";
    cin >> N;

    vector <int> arr(N);

    cout << "Enter array elements: ";
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    bubbleSort(arr, N);

    cout << "Sorted array: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    //Time Complexity -- O(N^2) [worst and avg case], O(N) - best case[array already sorted]
    //Space complexity -- O(N) - input space, O(1) - auxiliary space

    return 0;    
}