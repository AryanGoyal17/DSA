// Number hashing -- done

// Character hashing(A)
// Use ASCII values for this..

//NOTE: ASCII values
///1-- Digits(0-9) [48-57]
///2-- Lowercase letters (a-z) [97-122]
///3-- Uppercase letters (A-Z) [65-90]
///4-- Space[32]

//This is done for a string containing only lowercase characters!
//Character_hashing-B (general) is a better method, use that

#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cout << "Enter a string: ";
    cin >> s; //taking a string without spaces(a-z string - lowercase)

    int size = s.size();

    //Pre-compute (forming the hash array)

    int hash[26] = {0}; //26 letters

    for(int i = 0; i < size; i++){ //let size = N
        hash[s[i] - 'a']++;
    }

    //Fetching -- 

    int q;
    cout << "Enter the no of characters whose occurence you want to know: ";
    cin >> q;

    while(q--){
        char ch;
        cout << "Enter the character: ";
        cin >> ch;
        
        if(ch < 'a' || ch > 'z') cout << "Occurences = 0" << endl; //ch < 97 || ch > 122 also works correctly
        else cout << "Occurences of " << ch << " = " << hash[ch - 'a'] << endl;

    }

    //Time complexity -- O(N) + O(q), less tc than without hashing
    //Space complexity -- O(N) - input space, O(26) -- O(1){approx} -- axiliary space

    return 0;
}