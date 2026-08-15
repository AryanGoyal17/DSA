// Find the number that appears once, while other numbers appear twice -- optimal(XOR)

#include <bits/stdc++.h>
using namespace std;

int num_appears_once(int arr[], int N){

    int Xor = 0;

    for(int i = 0; i < N; i++){
        Xor = Xor ^ arr[i];
    }

    return Xor;
}

int main(){

    int arr[] = {1, 1, 3, 3, 2, 4, 4};
    int N = sizeof(arr)/sizeof(arr[0]);

    int num = num_appears_once(arr, N);
    cout << "Number that appears once = " << num << endl;

    //Time complexity -- O(N)
    //Space complexity -- O(1)

    return 0;
}