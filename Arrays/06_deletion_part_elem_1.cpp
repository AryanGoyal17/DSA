// Find index of element to be deleted..
// If element is present in the array, delete it .. else print - Element not found

// In case of multiple occurences, delete the 1st occurence -- default expectation

#include <bits/stdc++.h>
using namespace std;

int search_elem(int arr[], int N, int elem){

    for(int i = 0; i < N; i++){
        if(arr[i] == elem){
            return i;
        }
    }

    return -1;
}

// void delete(); //delete is a keyword in c++, dont use it as a fn/variable name

void deletion(int arr[], int &N, int index){

    for(int i = index; i < N - 1; i++){
        arr[i] = arr[i + 1]; //deletion
    }

    N = N - 1;
    //Printing array after deletion

    cout << "Array after deletion: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {4, 1, 6, 2, 6};

    // If array is unsorted use linear search, if its sorted use binary search

    int N = sizeof(arr) / sizeof(arr[0]);

    int elem;
    cout << "Enter the element you want to delete from the array: ";
    cin >> elem;

    cout << "Array before deletion: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    int index = search_elem(arr, N, elem);

    if(index < 0){
        cout << "Element NOT found" << endl;
    }
    else{
        deletion(arr, N, index);
    }

    //Time complexity -- O(N)
    //Space complexity -- O(1) [auxiliary space], O(1) = input space currently
    //                 -- O(N)[i/p space, if array of N elements is taken as input instead of initializing directly

    return 0;
}