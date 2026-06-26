// check-prime (brute force)

#include <bits/stdc++.h>
using namespace std;

void check_prime(int N){

    int count = 0;
    
    for(int i = 1; i <= N; i++){ 
        if(N % i == 0) count ++;
    }

    if(count == 2) cout << N << " is a prime number";
    else cout << N << " is NOT a prime number";
}

int main(){

    int N;
    cout << "Enter a number: ";
    cin >> N;

    check_prime(N);

    //Time complexity -- O(N)

    //Space complexity -- O(1)

    return 0;
}