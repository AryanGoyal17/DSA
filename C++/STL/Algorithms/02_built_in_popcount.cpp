#include <bits/stdc++.h>
using namespace std;

int main(){

    //built-in-popcount-- this algorithm returns the number of 1's in the binary representation of the number..

    int num1 = 7;
    cout << __builtin_popcount(num1) << endl;

    long long num2 = 125857894; //When used with long long, it becomes __builtin_popcountll
    cout << __builtin_popcountll(num2) << endl;

    return 0;
}