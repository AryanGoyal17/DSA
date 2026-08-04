//Brute-force approach = use sorting and then a loop -- time complexity = O(N*logN) + O(N)
//Better approach = first find largest by O(N) and then run another loop similar to brute force O(N) -- 2 passes = O(2N)

//Optimal approach ---

#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {1, 3, 2, 5, 1, 7, 10, 12, 11};

    int N = sizeof(arr) / sizeof(arr[0]);

    int largest = arr[0];
    int slargest = -1;

    // for(int i = 1; i < N; i++){ //Incorrect..

    //     if(arr[i] >= largest){
    //         largest = arr[i];
    //     }
    //     else if(arr[i] > slargest){
    //         slargest = arr[i];
    //     }
    // }
     
    for(int i = 0; i < N; i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }

    cout << "Second largest element = " << slargest << endl;

    //Time complexity -- O(N) [optimal]
    //Space complexity -- O(1)

    return 0;
}