//Largest element in array

//Optimal solution

#include <bits/stdc++.h>
using namespace std;

int maximum(int arr[], int N){

    int max_i = 0;

    //To handle the empty array test case --

    if(N <= 0) return -1;

    for(int i = 1; i < N; i++){
       if(arr[i] > arr[max_i]){
        max_i = i;
       }
    }

    return max_i;
}

int main(){

    int arr[] = {3, 6, 1, 5, 6};
    int N = sizeof(arr) / sizeof(arr[0]);

    int largest = maximum(arr, N);

    if(largest >= 0) cout << "Largest element in array = " << arr[largest] << endl;
    else cout << "Array is empty" << endl;
    

    //NOTE: For minimum element, just do arr[i] < arr[max_i] in maximum fn.. 
    //NOTE: If you want the index of last occurence just put arr[i] >= arr[max_i] in maximum fn

    //Time complexity -- O(N)
    //Space complexity -- O(1)

    return 0;
}