#include <bits/stdc++.h>
using namespace std;

int main(){

    //max element -- this is used to print the maximum element in an array....

    int arr[] = {1,2,3,4,5,6,7,8,20,13,100,0};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max_elem = *max_element(arr, arr + size);
    

    cout << max_elem << endl;

    return 0;
}