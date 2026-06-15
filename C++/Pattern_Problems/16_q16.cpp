#include <bits/stdc++.h>
using namespace std;

void pattern(int N){

    char print = 'A';

    for(int i = 0; i < N; i++){
        for(int j = 0; j <= i; j++){
           cout << print << " ";
        }
        cout << endl;
        print++;
    }
}

int main(){
    int N;
    cin >> N;
    pattern(N);

    //Another approach -- instead of incrementing print by print++ initialize print inside outer but above inner loop as char print = 'A' + i;

    //Space Complexity -- O(1)
    //Time Complexity -- O(N^2)[approx]
}