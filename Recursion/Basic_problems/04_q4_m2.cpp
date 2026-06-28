// Print N to 1(by forward recursion) --- by 2 parameters
// q4-m1 -- by single parameter

#include <bits/stdc++.h>
using namespace std;

void fn3(int i, int N){

    if(i < 1) return;

    cout << i << " ";
    fn3(i - 1, N);

}

int main(){

    int N;
    cout << "Enter N: ";
    cin >> N;

    fn3(N, N);

    //This was done by tail recursion

    //Time Complexity -- O(N) -- N fn calls
    //Space Complexity -- O(N) -- N fn calls waiting in call stack, N = stack space used in recursive calls

    return 0;
}