// Print all divisors -- in a sorted manner(ascending)

#include <bits/stdc++.h>
using namespace std;

void print_div(int N){

    for(int i = 1; i <= N; i++){
        if(N % i == 0) cout << i << " ";
        else continue;
    }

}

int main(){

    int N;
    cout << "Enter a number: ";
    cin >> N;
    
    cout << "Divisors of " << N << " -- ";
    print_div(N);

    //Time complexity -- O(N)
    //Space complexity -- O(1)

    return 0;
}