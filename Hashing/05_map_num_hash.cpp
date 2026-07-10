// If the largest no whose freq is to be searched(limit) is more than 10^7, then we cant use method learnt before
// Here, instead of hash array we use, maps!

#include <bits/stdc++.h>
using namespace std;

int main(){

    int size;
    cout << "Enter the no elements in array: ";
    cin >> size;

    vector <int> v1(size); //can se long long as dtype for large numbers


    map<int, int> hash; //can use long long if numbers are large...
    // cout << a1[5]; //prints - 0, if a key is not present in a map, then its value = 0

    cout << "Enter elements in array: ";
    for(int i = 0; i < size; i++){
        cin >> v1[i];
        hash[v1[i]]++; //pre-compute
    }

    //pre-compute--

    // for(int i = 0; i < size; i++){ //pre-compute can be done directly while taking array input.
    //     hash[v1[i]]++;
    // }

    int q;
    cout << "Enter the no. of numbers whose frequency you want to know: ";
    cin >> q;

    while(q--){
        
        int num;
        cout << "Enter the number: ";
        cin >> num;

        //fetch

        // cout << "Frequency of " << num << " = " << hash[num] << endl;  //This is correct, only flaw is that if a no if not present
                                                                          // in map, inserts it with value 0
                                                                          // with large q this can be a problem..

        if(hash.count(num)) cout << "Frequency of " << num << " = " << hash[num] << endl; 
        else cout << "Frequency = 0" << endl;
    }

    // Time complexity and space complexity discussed in 06 file..
    // We can use unordered map instead of map and it will still work fine. -- more notes about this are in 06-file

    return 0;
}