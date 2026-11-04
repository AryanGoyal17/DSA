// Floor in sorted array

// Find the largest element in the array that is less than or equal to (≤) x

#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {1, 2, 3, 3, 7, 8, 9, 9, 9, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    int low = 0;
    int high = size - 1;
    int x = 5;
    int answer = -1; //return -1 if not present

    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] > x){
            high = mid - 1;
        }
        else{
            answer = arr[mid];
            low = mid + 1;
        }
    }

    cout << answer << endl;
    
    //Time complexity -- O(logN)
    //Space complexity -- O(1)

    return 0;
}