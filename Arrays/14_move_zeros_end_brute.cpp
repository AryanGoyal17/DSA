// Move zeros to end -- Brute method

#include <bits/stdc++.h>
using namespace std;

void moveZeros(vector <int> &arr, int N){

    if(N == 0) return;

    vector <int> temp(N, 0);

    //A vector -- vector <int> temp;[use push back for this] can be created. In this method only non-zero elems are in temp

    int index = 0;

    for(int i = 0; i < N; i++){
        if(arr[i] != 0){
            temp[index] = arr[i];
            index++;
        }
    }

    for(int i = 0; i < N; i++){
        arr[i] = temp[i];
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

    //Time complexity = O(2N) {printing output array loop not counted}
    //Space complexity = O(N) {extra space}

    return 0;
}
