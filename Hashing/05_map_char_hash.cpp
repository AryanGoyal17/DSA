// If the largest no whose freq is to be searched(limit) is more than 10^7, then we cant use method learnt before
// Here, instead of hash array we use, maps!

#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int size = s.size();

    map<char, int> hash; //can use long long if numbers are large...
    // cout << a1['5']; //prints - 0, if a key is not present in a map, then its value = 0

    //pre-compute

    for(int i = 0; i < size; i++){
        hash[s[i]]++; 
    }

    int q;
    cout << "Enter the no. of characters whose frequency you want to know: ";
    cin >> q;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(q--){
        
        string str;
        cout << "Enter the character: ";
        getline(cin, str);

        char ch = str[0];

        //fetch

        // cout << "Frequency of " << num << " = " << hash[num] << endl;  //This is correct, only flaw is that if a no if not present
                                                                          // in map, inserts it with value 0
                                                                          // with large q this can be a problem..

        if(hash.count(ch)) cout << "Frequency of " << ch << " = " << hash[ch] << endl; 
        else cout << "Frequency = 0" << endl;
    }

    // Time complexity and space complexity discussed in 06 file..
    // We can use unordered map instead of map and it will still work fine. -- more notes about this are in 06-file

    return 0;
}