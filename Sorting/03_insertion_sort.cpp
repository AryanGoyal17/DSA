//Insertion sort -- take an element and place it in its correct order..

#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector <int> &arr, int n){

    for(int i = 1; i <= n - 1; i++){
        int j = i;

        while(j > 0 && (arr[j - 1] > arr[j])){ //change > to < for descending order
            swap(arr[j - 1], arr[j]);
            j--;
        }
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

    insertionSort(arr, N);

    cout << "Sorted array: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    //Time Complexity -- O(N^2) [worst and avg case], O(N) - best case[array already sorted] -- while loop doesnt run
    //Space complexity -- O(N) - input space, O(1) - auxiliary space

    return 0;    
}