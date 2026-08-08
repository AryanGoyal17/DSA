// Move zeros to end -- Better method(2-pointer) [almost as good as optimal]

#include <bits/stdc++.h>
using namespace std;

void moveZeros(vector <int> &arr, int N){

    if(N == 0) return;

    int p1 = 0;

    for(int p2 = 1; p2 < N; p2++){

        if(arr[p1] != 0){
            p1++;
        }
        else if(arr[p1] == 0 && arr[p2] != 0){
            swap(arr[p1], arr[p2]);
            p1++;
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

    //Time complexity = O(N) {O(N) for printing the final array not counted}
    //Space complexity = O(1) {no extra space used}

    return 0;
}