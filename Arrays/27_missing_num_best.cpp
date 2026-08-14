// Missing Number - Leetcode #268 (optimal-XOR approach)

//This is the best method to solve this question!


#include <bits/stdc++.h>
using namespace std;

int missing_num(int arr[], int N){

    int Xor1 = 0;
    int Xor2 = 0;

    for(int i = 0; i < N - 1; i++){

        Xor1 = Xor1 ^ (i + 1);
        Xor2 = Xor2 ^ arr[i];
    }

    Xor1 = Xor1 ^ N;

    return Xor1 ^ Xor2;
}

int main(){

    int arr[] = {1, 2, 4, 5};
    int N = 5;

    int missing = missing_num(arr, N);

    cout << "Missing number = " << missing;

    //Time complexity = O(N)
    //Space complexity = O(1)

    return 0;
}