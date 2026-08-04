//Quick Sort

#include <bits/stdc++.h>
using namespace std;

int part_index(vector<int> &arr, int low, int high){

    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(i <= high && arr[i] <= pivot){
            i++;
        }

        while(j >= low && arr[j] > pivot){
            j--;
        }

        if(i < j){
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}

void QuickSort(vector<int> &arr, int low, int high){

    if(low < high){
        int partition = part_index(arr, low, high);
        QuickSort(arr, low, partition - 1);
        QuickSort(arr, partition + 1, high);        
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

    QuickSort(arr, 0, N - 1);

    cout << "Sorted Array: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    //Time complexity -- O(N*logN)
    //Space complexity -- O(N) -- input space, auxiliary space -- O(logN)[stack space], rest -- O(1)

    return 0;
}