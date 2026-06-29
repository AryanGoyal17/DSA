// Print from 1 to N (Forward recursion)

#include <bits/stdc++.h>
using namespace std;

void fn4(int N){

    if(N <= 0) return;

    fn4(N - 1);

    cout << N << " ";

}

int main(){

    int N;
    cout << "Enter N: ";
    cin >> N;

    fn4(N);

    //This is called Head Recursion
    //q3_m1 -- Tail Recursion
    //q4_m1 -- Tail Recursion

    //Time complexity -- O(N), N fn calls
    //Space complexity -- O(N), N = stack space used in recursive calls
}