// Recursive 1 pointer approach -- check if string is palindrome

// Works only for alpha-numeric strings

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int i, string &s){

    if(i >= s.size()/2) return true;

    if(s[i] != s[s.size() - i - 1]) return false;

    return isPalindrome(i + 1, s);
}

int main(){

    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    if(isPalindrome(0, s)) cout << s << " is a Palindrome";
    else cout << s << " is NOT a Palindrome";

    return 0;

    //Time complexity -> O(N/2)
    //Space complexity -> O(N/2 + N) -- N/2 - stack space(auxiliary), N - input space

}