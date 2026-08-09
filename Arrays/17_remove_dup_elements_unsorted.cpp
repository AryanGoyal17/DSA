//Lab-Assignment-1 _ question-2

// 2) Design the logic to remove the duplicate elements from an Array and after the
// deletion the array should contain the unique elements.

#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(int arr[], int &N){

    unordered_set <int> s1;

    for(int i = 0; i < N; i++){
        s1.insert(arr[i]);
    }

    int size = s1.size();

    int index = 0;
    for(auto it : s1){
        arr[index] = it;
        index++;
    }

    N = size;
}

int main(){

    int arr[] = {1, 4, 1, 4, 1, 3, 2, 3};
    int N = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before removing duplicates: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    removeDuplicates(arr, N);

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    //This is the optimal method (for time) -- O(N)[set insertion -- O(logN), unordered set insertion -- O(1)]

    //This is not the optimal method{in terms of space}(for unsorted array), 
    // Optimal method(for space) -- use quick sort and then 2 pointer (for unsorted array)

    

    return 0;
}
