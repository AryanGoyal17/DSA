// Print 1 to N(by forward recursion)

#include <bits/stdc++.h>
using namespace std;

void fn3(int i, int N){

    if(i > N) return;

    cout << i << " ";
    fn3(i + 1, N);

}

int main(){

    int N;
    cout << "Enter N: ";
    cin >> N;

    fn3(1, N);

    //Time Complexity -- O(N) -- N fn calls
    //Space Complexity -- O(N) -- N fn calls waiting in call stack, N = stack space used in recursive calls

    return 0;
}