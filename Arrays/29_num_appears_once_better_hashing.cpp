// Find the number that appears once, while other numbers appear twice -- better(hashing)

#include <bits/stdc++.h>
using namespace std;

int num_appears_once(int arr[], int N){

    int max_elem = *max_element(arr, arr+N);
    vector<int> hash(max_elem + 1, 0); //max element algo takes O(N) time
    int result = 0;

    for(int i = 0; i < N; i++){
        hash[arr[i]]++;
    }

    for(int i = 0; i <= max_elem; i++){
        if(hash[i] == 1){
            result = i;
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

    //Time complexity -- O(2N + max element value)
    //Space complexity -- O(max_element + 1)

    //This method might not work for large integers(10^9, 10^12 etc...)

    return 0;
}