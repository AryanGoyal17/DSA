#include <bits/stdc++.h>
using namespace std;

void pattern(int N){

        for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << "*";
        }
        cout << endl;
    }
    
}

int main(){

   int t = 3; //Running for 3 test cases..

   for(int k = 0; k < t; k++){
    int N;
    cin >> N;
    pattern(N);
   }

//Understanding test cases and online compiler done...
//Time complexity -- O(N^2)
//Space complexity -- O(1   )

    return 0;
}