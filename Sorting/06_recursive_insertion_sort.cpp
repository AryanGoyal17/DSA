#include <bits/stdc++.h>
using namespace std;

void RecursiveInsertionSort(vector<int> &arr, int i, int N){

    if (i == N) return;

    int j = i;

    while(j > 0 && arr[j - 1] > arr[j]){
        swap(arr[j - 1], arr[j]);
        j--;
    }

    RecursiveInsertionSort(arr, i + 1, N);

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

    RecursiveInsertionSort(arr, 1, N);

    cout << "Sorted Array: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    //Time complexity -- best-case = O(N), avg and worst case = O(N^2) 
    //Space complexity -- O(N) = input space, O(N) = auxiliary space(Call stack)

    return 0;
}