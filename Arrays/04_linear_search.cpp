#include <bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[], int elem, int N){
    
    for(int i = 0; i < N; i++){
        if(arr[i] == elem){
            return i;
        }
    }

    return -1;
}


int main(){

    int arr[] = {7, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int N = sizeof(arr) / sizeof(arr[0]);

    int elem;
    cout << "Enter the element you want to search: ";
    cin >> elem;

    int index = LinearSearch(arr, elem, N);

    if(index >= 0 && index <= N - 1){
        cout << elem << " found at index = " << index << endl;
    }
    else{
        cout << "Element is not present in the array" << endl;
    }

    //Time complexity -- O(N) [Worst], O(1) -- best, O(N) -- avg case
    //Space complexity -- O(1) [auxiliary space], O(1) = input space currently
    //                 -- O(N)[i/p space, if array of N elements is taken as input instead of initializing directly

    return 0;
}