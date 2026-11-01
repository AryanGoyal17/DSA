// Finding upper bound in an array

#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {1, 2, 3, 3, 7, 8, 9, 9, 9, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    //M1 -- (Similar to Linear Search)

    int ub1 = size;
    int x = 11; //Element whose upper bound is to be found

    for(int i = 0; i < size; i++){
        if(arr[i] > x){
            ub1 = i;
            break;
        }
    }

    cout << ub1 << endl;

    //Time complexity -- O(N)
    //Space complexity -- O(1)

    //M2 -- (Binary Search)

    x = 12;

    int low = 0;
    int high = size - 1;
    int ub2 = size;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] <= x){
            low = mid + 1;
        }
        else{
            ub2 = mid;
            high = mid - 1;
        }
    }

    cout << ub2 << endl;

    // Time complexity -- O(logN) {base-2}
    // Space complexity -- O(1)

    //M3 -- C++ STL (built-in)

    x = 3;

    int ub3 = upper_bound(arr, arr+size, x) - arr;
    cout << ub3 << endl;

    //Time complexity -- O(logN) {BASE2} [internally same as M2]
    //Space complexity -- O(1)

    return 0;
}