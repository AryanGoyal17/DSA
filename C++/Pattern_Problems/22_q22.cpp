#include <bits/stdc++.h>
using namespace std;

void pattern(int N){

    int num1 = (N/2) + 1;

    for(int i = 0; i < 2*N - 1; i++){
        for(int j = 0; j < 2*N - 1; j++){
            int top = i;
            int left = j;
            int right = 2*N - 2 - j;
            int bottom = 2*N - 2 - i;

            int dist = min(min(top,bottom), min(left, right));
            cout << N - dist;
        }
        cout << endl;
    }
}

int main(){
    int N; //value of number at boundaries of pattern
    cin >> N;
    pattern(N);

    //Time complexity -- O(N^2)[approx]
    //Space complexity -- O(1)
}