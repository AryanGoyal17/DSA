// Hashing = Pre-storing and fetching

//PRE-COMPUTATION---
/// If the value in array is between 0 and 12.
/// Create a hash array with indices 0, 1, 2, 3.... till 12
/// Give each index a value of 0
/// then do  hash[arr[i]] += 1;

// FETCHING---
/// Then whenever you need occurence of any of 0,1,2.. till 12 just see value of hash[number whose occurence you want to see]

#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cout << "Enter the no of elements in array: ";
    cin >> N;

    vector <int> a(N);
    cout << "Enter array elements: ";
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }

    int limit;
    cout << "Enter the max value limit of numbers in array: ";
    cin >> limit;

    // int hash[limit + 1] = {0}; //Hash array created -- this causes stack overflow error..

    vector <int> hash(limit + 1);

    //Pre-compute

    for(int j = 0; j < N; j++){
        hash[a[j]] += 1;
    }

    //Fetch

    int q;
    cout << "Enter the number of integers whose occurence you want to find: ";
    cin >> q;
 
    while(q--){
        int num;
        cout << "Enter the number: ";
        cin >> num;

        if(num > limit) cout << "Occurence = 0" << endl;
        else cout << "Occurence of " << num << " = " << hash[num] << endl;

    }


    //Time complexity -- O(N) + O(N) + O(q) -- approximate O(q) + O(N) <<< O(q * N)[tc which we got without hashing] 
    //Space complexity -- O(N) - input space, O(limit + 1) -- O(limit) = auxiliary space

    //Conclusion -- with hashing, tc decreased by a large amount, while sc increased slightly..

    return 0;
}