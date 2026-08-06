// Left rotate array by k places -- Brute solution


#include <bits/stdc++.h>
using namespace std;

void rotateKplace(vector <int> &v1, int k, int N){

    if(N == 0) return; //For empty array

    k = k % N; // For the case when k > N

    // int temp[k]; -- This is a variable length array[size decided in runtime.. avoid using this... use a vector]
    vector <int> temp(k);

    for(int i = 0; i < k; i++){
        temp[i] = v1[i];
    }

    for(int i = k; i < N; i++){
        v1[i-k] = v1[i];
    }

    for(int i = N - k; i < N; i++){
        v1[i] = temp[i - N + k];
    }
}

int main(){

    vector <int> v1 = {1, 2, 3, 4, 5, 6, 7};

    int k;
    cout << "Enter the number of places by which you want to rotate the array: ";
    cin >> k;

    int N = v1.size();

    rotateKplace(v1, k, N);

    cout << "Rotated array: ";
    for(int i = 0; i < N; i++){
        cout << v1[i] << " ";
    }

    //Time complexity = O(k) + O(N - k) + O(k) = O(N + k)
    //Space complexity = O(k) {extra space used}

    return 0;
}