// Finding lower bound in an array

#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {1, 2, 3, 3, 7, 8, 9, 9, 9, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    //M1 -- (Similar to Linear Search)

    int lb1;
    int x = 11; //Element whose lower bound is to be found

    for(int i = 0; i < size; i++){
        if(arr[i] >= x){
            lb1 = i;
            break;
        }
    }

    cout << lb1 << endl;

    //Time complexity -- O(N)
    //Space complexity -- O(1)

    //M2 -- (Binary Search)

    x = 12;

    int low = 0;
    int high = size - 1;
    int lb2 = size;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] < x){
            low = mid + 1;
        }
        else{
            lb2 = mid;
            high = mid - 1;
        }
    }

    cout << lb2 << endl;

    // Time complexity -- O(logN) {base-2}
    // Space complexity -- O(1)

    //M3 -- C++ STL (built-in)

    x = 3;

    int lb3 = lower_bound(arr, arr+size, x) - arr;
    cout << lb3 << endl;

    //Time complexity -- O(logN) {BASE2} [internally same as M2]
    //Space complexity -- O(1)

    return 0;
}