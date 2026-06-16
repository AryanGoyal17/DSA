// Counting the digits of a number

#include <bits/stdc++.h>
using namespace std;

int count_digit(int num){

    int count = 0;

    if(num == 0) return 1;
    
    while(num != 0){ // if num > 0 is done, then it doesnt work for -ve integers!

        num = num / 10;
        count++;
    }

    return count;
}

int main(){

    cout << "Enter a number: ";
    int num;
    cin >> num;

    int numDigit = count_digit(num);

    cout << "Number of digits: " << numDigit;

    //Time complexity -- O(logn) [base of log is 10]
    //Space complexity -- O(1)

    return 0;
}