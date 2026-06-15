#include <bits/stdc++.h>
using namespace std;

void pattern(int N){
    for(int i = 0; i < N; i++){
        for(char j = 'A'; j <= 'A' + (N - i - 1); j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){

    int N;
    cin >> N;
    pattern(N);

    //Space Complexity -- O(1)
    //Time Complexity -- O(N^2)[approx]


    return 0;
}