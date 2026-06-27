// Print from N to 1 (Forward recursion)

#include <bits/stdc++.h>
using namespace std;

void fn4(int N){

    if(N <= 0) return;

    cout << N << " ";
    fn4(N - 1);

}

int main(){

    int N;
    cout << "Enter N: ";
    cin >> N;

    fn4(N);

    //Time complexity -- O(N), N fn calls
    //Space complexity -- O(N), N = stack space used in recursive calls
}