// Next Smaller Element (find next smaller element to the left) -- Brute

// Brute Solution

#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> arr = {4, 5, 2, 10, 8};
    int size = arr.size();

    vector <int> answer(size, 0);
    

    for(int i = 0; i < size; i++){ // int i = size - 1; i >= 0; i-- works correct with same output(no reversing required)
        bool found = false;
        for(int j = i - 1; j >= 0; j--){
            if(arr[j] < arr[i]){
                found = true;
                answer[i] = arr[j];
                break;
            }
        }
        if(!found){
            answer[i] = -1;
        }
    }

    for(int i = 0; i < size; i++){
        cout << answer[i] << " ";
    }

    //Time complexity = O(N^2)
    //Space complexity = O(N)

    return 0;
}