//Largest element in array

//Brute -- Sort the array and print the last element

#include <bits/stdc++.h>
using namespace std;

int part_index(int arr[], int low, int high){

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

void QuickSort(int arr[], int low, int high){
    if(low < high){
        int partition = part_index(arr, low, high);
        QuickSort(arr, low, partition - 1);
        QuickSort(arr, partition + 1, high);
    }
}


int main(){

    int arr[] = {3, 2, 1, 5, 2};

    int N = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr, 0, N-1);

    cout << "Largest element = " << arr[N - 1] << endl;

    //Time complexity -- O(N*logN)
    //Space complexity -- O(N) - input space, O(logN) - auxiliary space

    return 0;
}