#include <bits/stdc++.h>
using namespace std;

void pattern(int N){

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            if(i == 1 || j == 1 || i == N || j == N) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

int main(){

    //Printing a square
    
    int N; //Length of side of square
    cin >> N; 
    pattern(N);

    //Time Complexity -- O(N^2)[approx]
    //Space Complexity -- O(1)
}