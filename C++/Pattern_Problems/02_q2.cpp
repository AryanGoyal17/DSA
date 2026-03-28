#include <bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
      cout << endl;
    }

//Time complexity --- O(N(N+1)/2), approximate -- O(N^2)
//Space complexity --- O(1)

    return 0;
}