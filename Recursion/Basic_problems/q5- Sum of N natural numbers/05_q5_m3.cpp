// Sum of first N natural numbers -- brute force(using for loop)

#include <bits/stdc++.h>
using namespace std;

int fn5(int N){

    if(N <= 0) return 0;

    int sum = 0;

    for(int i = 1; i <= N; i++){
        sum = sum + i;
    }

    return sum;

}

int main(){

    int N;
    cout << "Enter N: ";
    cin >> N;
    
    int result = fn5(N);

    if(result == 0) cout << "Invalid";
    else cout << "Result: " << result;

    //Time complexity -- O(N)
    //Space complexity -- O(1)

    return 0;
}