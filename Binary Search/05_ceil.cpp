// Ceil in sorted array

// Find The smallest element in the array that is greater than or equal to (≥) x [value of lower bound]

#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {1, 2, 3, 3, 7, 8, 9, 9, 9, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    int low = 0;
    int high = size - 1;
    int x = 5;
    int answer = -1; // return -1 if not found

    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] < x){
            low = mid + 1;
        }
        else{
            answer = arr[mid];
            high = mid - 1;
        }
    }

    cout << answer << endl;

    // CEIL IS THE SAME AS LOWER BOUND IN SORTED ARRAY!
    
    //Time complexity -- O(logN)
    //Space complexity -- O(1)

    return 0;
}