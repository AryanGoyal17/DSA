// Merge sort --

#include <bits/stdc++.h>
using namespace std;

void merge(vector <int> &arr, int low, int mid, int high){

    vector <int> temp;

    int left = low;
    int right = mid + 1;

    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high){

    if(low >= high) return;

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
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

    mergeSort(arr, 0, N - 1);

    cout << "Sorted Array: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    //Time Complexity -- O(N * log(N)) -- base of log is 2 -- [best, avg and worst case]
    //Space Complexity -- i/p space = O(N), auxiliary space = O(N)[temp array] + O(logN) [base2] [due to call stack] = o(N)[approx]

    return 0;
}