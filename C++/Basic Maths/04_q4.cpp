//Check if Armstrong Number or not

#include <bits/stdc++.h>
using namespace std;

bool check_arm(int N){

    int count = 0;
    int num1 = N;
    int num2 = N;
    int sum = 0;

    while(num1 > 0){
         num1 = num1/10;
         count++;
    }

    while(num2 > 0){
        int digit = num2 % 10;
        num2 = num2 / 10;
        sum += round(pow(digit, count)); // as pow returns float for large numbers which while getting typecasted to int might give wrong answers
    }

    if(sum == N) return true;
    else return false;

}

int main(){

    int N;
    cout << "Enter a number: ";
    cin >> N;

    if(check_arm(N)) cout << N << " is an Armstrong number";
    else cout << N << " is NOT an Armstrong number";

    //Time complexity -- O(logn) -- base10
    //Space complexity -- O(1)
    
}
