// Next Greater Element - II (Leetcode #503)

// Brute solution -- Outer loop (whole array), then inner 2 loops (first loop - i + 1 to n -1 and second loop - 0 to i - 1)

// Better solution -- Use concept of circular array


#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> arr = {2, 10, 12, 1, 11};
    vector <int> answer;
    int size = arr.size();

    for(int i = 0; i < size; i++){
        bool found = false;
        for(int j = i + 1; j <= i + size - 1; j++){
            int index = j % size;
            if(arr[index] > arr[i]){
                found = true;
                answer.push_back(arr[index]);
                break;
            }
        }
        if(!found){
            answer.push_back(-1);
        }
    }

    for(int i = 0; i < answer.size(); i++){
        cout << answer[i] << " ";
    }

    //Time complexity - O(N^2)
    //Space complexity - O(N) [just to store the answer]

    return 0;
}
