// Binary search in an array

#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int elem, int low, int high){

    while(low <= high){
        int mid = low + ((high - low) / 2);

        if (arr[mid] == elem){
            return mid;
        }
        else if(arr[mid] > elem){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return -1;
}

int main(){

    int arr[] = {1, 4, 5, 10, 13, 57, 60};

    int N = sizeof(arr) / sizeof(arr[0]);

    int elem;
    cout << "Enter the element you are searching for: ";
    cin >> elem;

    int index = BinarySearch(arr, elem, 0, N - 1);

    if(index >= 0 && index <= N - 1){
        cout << elem << " found at index = " << index << endl;
    }
    else{
        cout << "Element is not present in the array" << endl;
    }

    //Time complexity -- O(1) -- best case, Avg case -- 0.5 * logN = logN, Worst case -- logN [base of log = 2]
    //Space complexity -- O(1) [auxiliary space], O(1) = input space currently
    //                 -- O(N)[i/p space, if array of N elements is taken as input instead of initializing directly

    return 0;
}