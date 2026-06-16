#include <bits/stdc++.h>
using namespace std;

void pattern(int N){

    char start = 'A' + N - 1;

    for(int i = 0; i < N; i++){
        for(char ch = start - i; ch <= start; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main(){

    int N;
    cin >> N;
    pattern(N);

    //Time Complexity -- O(N^2)[approx]
    //Space Complexity -- O(1)
}