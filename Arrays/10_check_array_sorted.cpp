// Check if array is sorted in non-descending order --

// M1 - Brute force = O(N^2)[time complexity] - use nested loops
// M2 - Optimal = O(N)

//Optimal solution --

#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int N){

    for(int i = 1; i < N; i++){
       if(arr[i] < arr[i - 1]){
        return false;
       }
    }
    return true;
}

int main(){

    int arr[] = {1, 2, 3, 3, 4, 5}; //swap 4 and 5 to check difference in output

    int N = sizeof(arr) / sizeof(arr[0]);

    if(isSorted(arr, N)){
        cout << "Array is sorted in non-descending order" << endl;
    }
    else{
        cout << "Array is NOT sorted in non-descending order" << endl;
    }

    //Time complexity - O(N)
    //Space complexity - O(1)

    return 0;
}