// Two Sum -- brute + optimized brute

// T1 - return true/false (pair exists or not)
// T2 - pair exists now return indices

// This is solution of T2

#include <bits/stdc++.h>
using namespace std;

vector <int> twoSum(int arr[], int N, int target){

    for(int i = 0; i < N; i++){
        int sum = 0;
        // for(int j = 0; j < N; j++){ //The commented lines are of brute solution
        for(int j = i + 1; j < N; j++){ //Optimized brute
            // if(i != j){
                sum = arr[i] + arr[j];
                if(sum == target){
                    return {i, j};
                }
            // }
        }
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
    
    //Time complexity = slightly less than O(N^2) - for optimized brute, O(N^2) for brute
    //Space complexity = O(1)

    return 0;
}