//Check if Palindrome or Not (Best Method)

#include <bits/stdc++.h>
using namespace std;

bool check_palindrome(int N){

    if((N < 0) || ((N != 0) && (N % 10 == 0))) return false;

    int reverse = 0;

    while(N > reverse){
        int digit = N % 10;
        N = N / 10;

        reverse = reverse * 10 + digit;
    }

    if((reverse == N) || (N == reverse / 10)) return true;
    else return false;
}

int main(){

    int N;
    cout << "Enter a number: ";
    cin >> N;
    
    if(check_palindrome(N)) cout << N << " is a palindrome number";
    else cout << N << " is NOT a palindrome number";

    //Time complexity -- still O(logn) -- base10 but fewer steps are done this time
    //Space complexity -- O(1)
    
    return 0;
}