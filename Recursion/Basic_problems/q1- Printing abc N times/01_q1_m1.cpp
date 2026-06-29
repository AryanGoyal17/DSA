//Understand recursion by printing something(abc) N times

//m1-- with global variable

#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void fn1(int N){

    if(cnt == N) return;

    cout << "abc" << endl;
    cnt++;

    fn1(N);
}

int main(){

    int N;
    cout << "Enter N: ";
    cin >> N;
    
    fn1(N);

    return 0;
}