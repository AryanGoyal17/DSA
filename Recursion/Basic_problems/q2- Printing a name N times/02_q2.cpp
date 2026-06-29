//Printing name N times using Recursion 

#include <bits/stdc++.h>
using namespace std;

void fn2(string name, int N){

    if(N <= 0) return;

    cout << name << endl;
    fn2(name, N-1);

}

int main(){

    string name;
    
    cout << "Enter your name: ";
    getline(cin, name);

    int N;
    cout << "Enter N: ";
    cin >> N;

    fn2(name, N);

    //Time complexity -- O(N) -- n times function called
    //Space complexity -- O(N) -- n fn calls waiting in call stack

    return 0;
}