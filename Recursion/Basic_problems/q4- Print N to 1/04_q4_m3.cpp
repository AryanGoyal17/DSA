//Print n to 1 (by head recursion -- printing after recursive call)

#include <bits/stdc++.h>
using namespace std;

void fn4(int i, int N){

    if(i > N) return;

    fn4(i + 1, N);

    cout << i << " ";
}

int main(){

    int N;
    cout << "Enter N: ";
    cin >> N;

    fn4(1, N);

    //Time complexity -- O(N), n fn calls
    //Space complexity -- O(N), N = stack space used by recursive calls

    return 0;
}