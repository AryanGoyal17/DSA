// Left rotate array by k places -- Optimal solution

#include <bits/stdc++.h>
using namespace std;

//Instead of using built-in reverse of c++ stl -- we can use 2 pointer approach to reverse an array --

// void reverseArray(vector <int> &v1, int start, int end){ 

//     while(start < end){
//         int temp = v1[end];
//         v1[end] = v1[start];
//         v1[start] = temp;

//         //Use temp as in above or just do swap(v1[start], v1[end])

//         start++;
//         end--;
//     }
// }

void rotateKplace(vector <int> &v1, int k, int N){

    if(N == 0 || k == 0) return;
    k = k % N;
    
    reverse(v1.begin(), v1.begin() + k);
    reverse(v1.begin() + k, v1.end());
    reverse(v1.begin(), v1.end());

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

    //Time complexity = O(k) + O(n - k) + O(n) = O(2N)
    //Space complexity = O(1) {in terms of extra space}

    return 0;
}