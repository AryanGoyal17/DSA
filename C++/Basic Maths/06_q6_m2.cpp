// Print all divisors -- in a sorted manner(ascending)

#include <bits/stdc++.h>
using namespace std;

void check_prime(int N){

    int count = 0;
    
    for(int i = 1; i*i <= N; i++){ //could have done i <= sqrt(N) -- but since sqrt is also a fn, its called every iteration-- takes more time
        if(N % i == 0){

             count++;

             if(N/i != i){
                 count++;
             }
        } 
    }

    if(count == 2) cout << N << " is a prime number";
    else cout << N << " is NOT a prime number";
}

int main(){

    int N;
    cout << "Enter a number: ";
    cin >> N;

    check_prime(N);

    //Time complexity -- O(sqrt(N)), best case complexity -- O(sqrt(N))

    //due to the higher best case complexity -- m1 is better

    //Space complexity -- O(1)

    return 0;
}