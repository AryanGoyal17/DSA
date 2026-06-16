#include <bits/stdc++.h>
using namespace std;

void pattern(int N){
    for(int i = 0; i < N; i++){
        for(int j = 1; j <= N - i - 1; j++){
            cout << " ";
        }
        for(char k = 'A'; k <= 'A' + i; k++){
            cout << k;
        }
        for(char l = 'A' + i - 1; l >= 'A'; l--){
            cout << l;
        }
        cout << endl;
    }
}

int main(){

    int N;
    cin >> N;
    pattern(N);

    //Time complexity -- O(N^2) [approx]
    //Space complexity -- O(1)

    return 0;
}