// Why do we need hashing?

//// -- Eg-- We have to find how many times a number appears in an integer array

#include <bits/stdc++.h>
using namespace std;

int count(int n, vector<int>& v1){

    int count = 0;
    int size = v1.size();
    for(int i = 0; i < size; i++){
        if(v1[i] == n) count++;
    }
    return count;
}

int main(){

    vector<int> a;

    int N;
    cout << "Enter the number of elements in array: ";
    cin >> N;

    
    for(int i = 0; i < N; i++){
       
       int num;
       cout << "Enter array element: ";
       cin >> num;
       a.push_back(num);
    }

    int n_find;
    cout << "Enter number whose no of occurences you want to find: ";
    cin >> n_find;

    int ans = count(n_find, a);

    cout << "Count: " << ans;

    //Time complexity -- O(2 * N) = O(N) {approx}
    //Space complexity -- O(N) -> input space, O(1) -> auxiliary space

    //Now if we find the num of occurences for q numbers.. then time complexity total = O(q * N)... if q is very large - say 10^5
    //And vector size = 10^5.. then tc = O(10^10)... 10^8 ops take around 1s, so total program will take approximately 100s!!

    //So to do this in a more efficient manner, we use hashing

    return 0;
}