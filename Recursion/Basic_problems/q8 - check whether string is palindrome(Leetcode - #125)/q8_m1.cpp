// Check whether string is palindrome or not----

//Optimal approach(0ms runtime on Leetcode)

//Convert all char to lowercase, ignore non - alphanumeric characters--

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){

    int left = 0;
    int right = s.size() - 1;

    while(left < right){

        if(!isalnum(s[left])){
            left++;
        }
        else if(!isalnum(s[right])){
          right--;
        }
        else if(tolower(s[left]) != tolower(s[right])) return false;
        else{
            left++;
            right--;
        }
    }
    return true;
}

int main(){

    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    if(isPalindrome(s)) cout << s << " is a Palindrome";
    else cout << s << " is NOT a Palindrome";

    return 0;

    //Time complexity -> O(N/2) -- approx-- O(N)
    //Space complexity -> O(N) -- input space, O(1) -- auxiliary space
}