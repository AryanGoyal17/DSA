//Sum of first N natural numbers -- Functional recursion(when you want fn to return the answer)

#include <bits/stdc++.h>
using namespace std;

int fn5(int N){

    if(N == 1) return 1;

    //Sum of first N natural numbers = N + sum of first (N - 1) natural numbers

    return (N + fn5(N - 1));

}

int main(){

    int N;
    cout << "Enter N: ";
    cin >> N;

    if(N <= 0){
        cout << "Invalid";
    }
    else{
        int result = fn5(N);
        cout << "Result: " << result;
    }

    return 0;

    //Time complexity -- O(N), n fn calls
    //Space complexity -- O(N), stack space stores n recursive calls
}