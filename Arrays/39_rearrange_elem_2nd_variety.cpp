// Rearrange array elements by sign - 2nd variety (+ve and -ve elements NOT equal)

// The optimal for this is the same as better(optimized brute of 35 -- rearrange element by sign)

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

    int equal_size = min(positives.size(), negatives.size());

    for(int i = 0; i < equal_size; i++){
        arr[2*i] = positives[i];
        arr[2*i + 1] = negatives[i];
    }

    int index = 2*equal_size;

    if(positives.size() > negatives.size()){
        for(int i = equal_size; i < positives.size(); i++){
            arr[index] = positives[i];
            index++;
        }
    }
    else{
        for(int i = equal_size; i < negatives.size(); i++){
            arr[index] = negatives[i];
            index++;
        }
    }

}

int main(){
    vector <int> arr = {1, 2, 3, -1, -4, -3, -2, -3, 4, -5}; //o/p = {1, -1, 2, -4, 3, -3, 4, -2, -3, -5}
    int n = arr.size();

    rearrangeElem(arr, n);

    cout << "Result = ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    //Time complexity = O(2N) [worst case]
    //Space complexity = O(N)

    return 0;
}