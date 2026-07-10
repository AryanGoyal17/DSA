//question - Count the frequencies of all array elements

#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cout << "Enter no of elements in array: ";
    cin >> N;

    vector <int> v1(N);
    unordered_map<int, int> hash;


    cout << "Enter array elements: ";
    for(int i = 0; i < N; i++){
        cin >> v1[i];
        hash[v1[i]]++;
    }

    for(auto it: hash){
        cout << "Frequency of " << it.first << " = " << it.second << endl;
    }

    //No of keys in map = K
    //Time complexity = O(N + K) [best, avg], O(N^2 + K) -- worst(very rare)
    //Space complexity = O(N) - input space, O(no of keys in map(K)) - auxiliary space
 
}