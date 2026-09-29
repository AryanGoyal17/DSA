// Valid Anagram (Leetcode #242) #brute

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2){
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1 == s2) return true;
    else return false;
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

    //Tc = O(NlogN)
    //Sc = O(1) / O(logN) [why??]

    return 0;
}