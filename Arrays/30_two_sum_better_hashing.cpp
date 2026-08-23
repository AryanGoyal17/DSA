// Two Sum -- brute + optimized brute

// T1 - return true/false (pair exists or not)
// T2 - pair exists now return indices

// This is solution of T2

#include <bits/stdc++.h>
using namespace std;

vector <int> twoSum(int arr[], int N, int target){

    unordered_map <int, int> store_num;

    // for(int i = 0; i < N; i++){
    //     store_num[arr[i]] = i;
    // }

    // for(int i = 0; i < N; i++){
    //     if(store_num.find(target - arr[i]) != store_num.end()){
    //         return {i, store_num[target - arr[i]]};
    //     }
    // } //The commented code has a self-pairing bug!!

    for(int i = 0; i < N; i++){
        int num_find = target - arr[i];

        if(store_num.find(num_find) != store_num.end()){
            return {i, store_num[num_find]};
        }

        store_num[arr[i]] = i;
    }

    return {};
}

int main(){

    int arr[] = {2, 5, 3, 9, 1, 4};
    int N = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter the target: ";
    int target;
    cin >> target;

    vector <int> result = twoSum(arr, N, target);

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    
    //Time complexity = O(N) - best, avg, O(N^2) - worst (for unordered map), for map - its O(N*log(N))
    //Space complexity = O(N)

    return 0;
}