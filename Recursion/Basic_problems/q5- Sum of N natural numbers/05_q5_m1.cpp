// Sum of first N numbers --- using formula

#include <bits/stdc++.h>
using namespace std;

int fn5(int N){

    if(N < 1) return 0;

    int sum = (N*(N + 1)) / 2;
    return sum;

}

int main(){

    int N;
    cout << "Enter N: ";
    cin >> N;

    int result = fn5(N);

    if(result == 0) cout << "Invalid";
    else  cout << "Result: " << result;

    return 0;

    //Time complexity -- O(1)
    //Space complexity -- O(1)
}