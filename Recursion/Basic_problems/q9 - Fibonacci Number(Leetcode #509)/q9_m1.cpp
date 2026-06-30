//Recursion approach -- Multiple recursion calls

//Print fibonacci series till N..

//If question was find nth fibonacci number -- dont write the for loop .. time complexity = 2^N, space complexity = O(N)

#include <bits/stdc++.h>
using namespace std;

int fib(int N){
    if(N <= 1) return N;
    return (fib(N - 1) + fib(N - 2));
}

int main(){

    int N;
    cout << "Enter N: ";
    cin >> N;

    for(int i = 0; i <= N; i++){
        cout << fib(i) << " ";
    }

    return 0;

    //Time complexity -- O(2^N)
    //Space complexity -- O(N)
}