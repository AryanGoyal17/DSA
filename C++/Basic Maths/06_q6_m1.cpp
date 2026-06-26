#include <bits/stdc++.h>
using namespace std;

bool check_prime(int N){

    if(N == 1 || N == 0) return false;

    for(int i = 2; i*i <= N; i++){
        if(N % i == 0) return false;
    }

    return true;

}

int main(){

    int N;
    cout << "Enter a number: ";
    cin >> N;
    
    if(check_prime(N)) cout << N << " is a prime number";
    else cout << N << " is NOT a prime number";

    //Time complexity -- O(sqrt(N)) --- best case complexity -- O(1)
    //Space complexity -- O(1)

    return 0;
}

