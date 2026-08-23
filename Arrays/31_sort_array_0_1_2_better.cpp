// Leetcode #75 -- Sort colors 

// Brute - sort the array - use IntroSort(Time complexity = O(NlogN), Space complexity = O(1))

// Better ---

#include <bits/stdc++.h>
using namespace std;

void SortColors(vector<int> &arr){

    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 0) count_0++;
        else if(arr[i] == 1) count_1++;
        else count_2++;
    }

    for(int j = 0; j < count_0; j++){
        arr[j] = 0;
    }

    for(int k = count_0; k < count_0 + count_1; k++){
        arr[k] = 1;
    }

    for(int l = count_0 + count_1; l < arr.size(); l++){
        arr[l] = 2;
    }

}

int main(){
    vector <int> arr = {0, 0, 1, 2, 0, 1, 2, 2, 1, 0, 0, 1}; 

    SortColors(arr);

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    //Time complexity = O(2*N)
    //Space complexity = O(1)

    return 0;
}