// Move zeros to end -- Optimal method(2-pointer)

#include <bits/stdc++.h>
using namespace std;

void moveZeros(vector <int> &arr, int N){

    if(N == 0) return;

    int j = -1;

    for(int i = 0; i < N; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    if(j == -1) return;

    for(int i = j + 1; i < N; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){

    vector <int> arr = {1, 2, 0, 5, 4, 3, 0, 1, 0, 3, 2};

    int N = arr.size();

    moveZeros(arr, N);

    cout << "Array after moving zeros: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    //Time complexity = O(N) {O(N) for printing the final array not counted} = O(x) + O(N - x) [0 found at index = x]
    //Space complexity = O(1) {no extra space used}

    return 0;
}