// Find maximum number of consecutive ones in a binary array(optimal)

#include <bits/stdc++.h>
using namespace std;

int max_consec_ones(int arr[], int N){

    int count_max = 0;
    int count_check = 0;

    for(int i = 0; i < N; i++){
        if(arr[i] == 1){
            count_check++;
            count_max = max(count_check, count_max); // Can use this instead of below if condition
        }
        // if(count_check > count_max){
        //     count_max = count_check;
        // }
        // if(arr[i] != 1){ 
        else{
            count_check = 0;
        }
    }

    return count_max;
}

int main(){

    int arr[] = {1, 1, 0, 0, 1, 1, 1};
    int N = sizeof(arr)/sizeof(arr[0]);

    int num = max_consec_ones(arr, N);
    cout << "Maximum consecutive ones = " << num << endl;

    //Time complexity -- O(N)
    //Space complexity -- O(1)

    return 0;
}