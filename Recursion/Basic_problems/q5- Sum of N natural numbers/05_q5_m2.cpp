// Sum of first N numbers --- parameters + using global variable

#include <bits/stdc++.h>
using namespace std;

int sum = 0;

void fn5(int i, int N){

    if(N <=0){
        cout << "Invalid";
        return;
    }

    if(i > N){
        cout << "Result: " << sum;
        return;
    }

    sum = sum + i;

    fn5(i + 1, N);
}

int main(){

    int N;
    cout << "Enter N: ";
    cin >> N;

    fn5(1, N);

    //Time complexity -- O(N) -- n fn calls
    //Space complexity -- O(N) -- N = stack space used by recursive calls

    //NOTE: Dont use global variables while solving on leetcode


    return 0;
}