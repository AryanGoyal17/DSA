//Understand recursion by printing something(abc) N times

//m2 - without global variable(1 parameter)

//NOTE: Dont use global variables while solving on leetcode

#include <bits/stdc++.h>
using namespace std;

void fn1(int N){

    if(N <= 0) return;

    cout << "abc" << endl;

    fn1(N-1);
}

int main(){

    int N;
    cout << "Enter N: ";
    cin >> N;
    
    fn1(N);

    return 0;
}