#include <bits/stdc++.h>
using namespace std;

void RecursiveBubbleSort(vector<int>& arr, int high){

    if(high == 0) return;

    int swapped = 0;

    for(int i = 0; i <= high - 1; i++){
        if(arr[i] > arr[i + 1]){
            swap(arr[i], arr[i + 1]);
            swapped = 1;
        }
    }

    if(swapped == 0) return;

    RecursiveBubbleSort(arr, high - 1);

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

    int high = N - 1;

    RecursiveBubbleSort(arr, high);

    cout << "Sorted Array: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    //Optimal solution -- above
    //Time complexity -- O(N) - best case, O(N^2) [avg and worst case] 
    //Space complexity -- O(N)[input space], O(N)[auxilliary space - call stack]

    //For brute force solution -- Time complexity  in all cases - O(N^2) [already sorted case not implemented]

    return 0;
}