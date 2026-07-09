// Character hashing(B)
// Use ASCII values for this..

//NOTE: ASCII values
///1-- Digits(0-9) [48-57]
///2-- Lowercase letters (a-z) [97-122]
///3-- Uppercase letters (A-Z) [65-90]
///4-- Space[32]

//General method for character hashing

#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n'); //No need to flush here, flush i/p buffer only when getline used after cin
    cout << "Enter a string: ";
    getline(cin, s);

    int size = s.size();

    //Pre-compute (forming the hash array)

    int hash[256] = {0}; //There are total 256 characters
    for(int i = 0; i < size; i++){ //let size = N
        hash[s[i]]++; //let s[i] = 'A', then we get hash['A'], here 'A' is automatically typecasted to 65!
    }

    //Fetching -- 

    int q;
    cout << "Enter the no of characters whose occurence you want to know: ";
    cin >> q;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //flushing the input buffer as getline is used after cin

    while(q--){
        // char ch;
        // cout << "Enter the character: ";
        // cin >> ch;

        // cout << "Occurences of " << ch << " = " << hash[ch] << endl;

        //The above code is correct, but it doesnt work for space character ASCII(32) as cin ignores it

        char ch;

        string temp;
        cout << "Enter the character: ";
        getline(cin, temp);
        ch = temp[0];
        cout << "Occurences of " << ch << " = " << hash[ch] << endl;
    }

    //Time complexity -- O(N) + O(q), less tc than without hashing
    //Space complexity -- O(N) - input space, O(256) -- O(1){approx} -- axiliary space

    return 0;
}