//Check if Palindrome or Not (Brute-Force)

#include <bits/stdc++.h>
using namespace std;

    bool isPalindrome(int x) {

        if(x < 0) return false; //If placed below the loop, increases time by 3ms

        int reverse = 0;
        int n = x;

        while(n != 0){

            int digit = n % 10;
            n = n / 10;

            if(reverse > INT_MAX / 10 || reverse < INT_MIN / 10) return false; //This solution is for problem constrained to 32 bit integers
                                                                               //For absolute general sol, use long long
            
            reverse = reverse * 10 + digit;
            
        }

        if(reverse == x) return true; 
        else return false;
    }



int main(){

    int x;
    cout << "Enter a number: ";
    cin >> x;

    bool check = isPalindrome(x);

    if(check) cout << x << " is a palindrome number!" << endl;
    else cout << x << " is NOT a palindrome number!" << endl;

    //Time complexity -- O(logn) [base10]
    //Space complexity -- O(1)
}