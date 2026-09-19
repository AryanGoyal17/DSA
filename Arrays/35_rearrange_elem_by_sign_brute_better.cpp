// Rearrange array elements by sign - Leetcode #2149 - brute + optimized brute(better)

#include <bits/stdc++.h>
using namespace std;

void rearrangeElem(vector<int>& arr, int n){

    vector <int> positives;
    vector <int> negatives;

    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            positives.push_back(arr[i]);
        }
        else{
            negatives.push_back(arr[i]);
        }
    }

    //BRUTE-- 
    // for(int i = 0; i < n; i++){
    //     if(i % 2 == 0){
    //         arr[i] = positives[i/2];
    //     }
    //     else{
    //         arr[i] = negatives[i/2];
    //     }
    // }

    //OPTIMIZED BRUTE -- better solution
    for(int i = 0; i < n/2; i++){

            arr[2*i] = positives[i];
            arr[2*i + 1] = negatives[i];
    }
}

int main(){
    vector <int> arr = {1, 2, 3, -1, -4, -3}; //o/p = {1, -1, 2, -4, 3, -3}
    int n = arr.size();

    rearrangeElem(arr, n);

    cout << "Result = ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    //Time complexity = O(2N) [brute] , O(N + N/2)[optimized brute - better]
    //Space complexity = O(N)

    return 0;
}