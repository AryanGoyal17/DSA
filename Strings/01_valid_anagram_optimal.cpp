// Valid Anagram (Leetcode #242) #Better

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){
        int hash[26] = {0}; //As strings consist of lowercase letters, otherwise do hash[256]

        if(s.size() != t.size()) return false;
        else{
            for(int i = 0; i < s.size(); i++){
                hash[s[i] - 'a']++;
                hash[t[i] - 'a']--;
            }

            for(int i = 0; i < 26; i++){
                if(hash[i] != 0) return false;
            }
        }

        return true;
}

int main(){

    string s1 = "anagram";
    string s2 = "ganaarm";
    string s3 = "angra";

    if(isAnagram(s1, s2)){
        cout << "Yes" << '\n';
    }
    else{
        cout << "No" << '\n';
    }

    if(isAnagram(s1, s3)){
        cout << "Yes" << '\n';
    }
    else{
        cout << "No" << '\n';
    }

    //Tc = O(N) [exact = O(N) + O(26)]
    //Sc = O(1) # Why is O(k) for character hash treated as O(1)?

    return 0;
}