#include <bits/stdc++.h>
using namespace std;

void pattern(int N){

         char start = 'A' + N - 1;

    for(int i = 1; i <= N; i++){

        char ch = start;

        for(int j = 1; j <= i; j++){

            cout << ch << " ";
            ch++;
        }

        cout << endl;
        start--;
    }
}

int main(){

    int N;
    cin >> N;
    pattern(N);

    //Time Complexity -- O(N^2)[approx]
    //Space Complexity -- O(1)
}