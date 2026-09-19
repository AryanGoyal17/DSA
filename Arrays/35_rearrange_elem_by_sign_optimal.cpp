// Rearrange array elements by sign - Leetcode #2149 - optimal

// Why 2 pointers cant be used and why space cant be reduced? [in written notes]

#include <bits/stdc++.h>
using namespace std;

vector <int> rearrangeElem(vector<int>& arr, int n){

    vector <int> result(n);
    int posIndex = 0;
    int negIndex = 1;

    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            result[posIndex] = arr[i];
            posIndex += 2;
        }
        else{
            result[negIndex] = arr[i];
            negIndex += 2;
        }

        // if(posIndex > n && negIndex > n) break; -- this is not needed
    }

    return result;

}

int main(){
    vector <int> arr = {1, 2, 3, -1, -4, -3}; //o/p = {1, -1, 2, -4, 3, -3}
    int n = arr.size();

    vector <int> answer = rearrangeElem(arr, n);

    cout << "Result = ";
    for(int i = 0; i < n; i++){
        cout << answer[i] << " ";
    }

    //Time complexity = O(N)
    //Space complexity = O(N)

    return 0;
}