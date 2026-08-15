// Find the number that appears once, while other numbers appear twice -- better(map)

#include <bits/stdc++.h>
using namespace std;

int num_appears_once(int arr[], int N){

    int result = 0;

    map <long long, int> m1;

    for(int i = 0; i < N; i++){
        m1[arr[i]]++;
    }

    for(auto it : m1){
        if(it.second == 1){
            result = it.first;
            break;
        }
    }

    return result;
}

int main(){

    int arr[] = {1, 1, 3, 3, 2, 4, 4};
    int N = sizeof(arr)/sizeof(arr[0]);

    int num = num_appears_once(arr, N);
    cout << "Number that appears once = " << num << endl;

    //No of elements in map = M = ((N/2) + 1)

    //For ordered map -- 

    //Time complexity -- O(NlogM + M)
    //Space complexity -- O(M)

    //For unordered map --

    //Time complexity -- best, avg case -- O(N + M), worst = O(N^2 + M)
    //Space complexity -- O(M)

    return 0;
}