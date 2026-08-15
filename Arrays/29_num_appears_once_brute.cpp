// Find the number that appears once, while other numbers appear twice -- brute

#include <bits/stdc++.h>
using namespace std;

int num_appears_once(int arr[], int N){

    int result = 0;

    for(int i = 0; i < N; i++){
        int count = 0;
        for(int j = 0; j < N; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
            result = arr[i];
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

    //Time complexity -- O(N^2)
    //Space complexity -- O(1)

    return 0;
}