#include <bits/stdc++.h>
using namespace std;

int count_digit(int num){

    if(num == 0) return 1;

    int N = abs(num); //So that the code works for negative integers as well

    int count = int(log10(N) + 1);
    return count;
}

int main(){

    cout << "Enter a number: ";
    int num;
    cin >> num;
    int numDigit = count_digit(num);

    cout << "Number of digits: " << numDigit;

    //This is the simplest and the best solution!
    //Time complexity -- O(1)
    //Space complexity -- O(1)

    return 0;
}