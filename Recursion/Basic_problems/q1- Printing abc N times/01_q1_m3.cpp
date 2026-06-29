//Understand recursion by printing something(abc) N times

//m3 - without global variable(2 paramters)

#include <bits/stdc++.h>
using namespace std;

void fn1(int i, int N){

    if(i > N) return;

    cout << "abc" << endl;

    fn1(i + 1, N);
}

int main(){

    int N;
    cout << "Enter N: ";
    cin >> N;
    
    fn1(1, N);

    return 0;

    //Time complexity -- O(N) -- n function calls
    //Space complexity -- O(N) -- n function calls waiting inside stack space -- call stack of N fn's waiting created

    //Time complexity of m1,m2,m3 same as above
}