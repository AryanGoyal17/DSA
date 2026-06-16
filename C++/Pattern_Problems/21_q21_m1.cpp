#include <bits/stdc++.h>
using namespace std;

void pattern(int N){

    for(int i = 1; i <= N; i++){
        cout << "*";
    }
    cout << endl;
    
    for(int j = 1; j <= N - 2; j++){
        cout << "*";
        for(int k = 1; k <= N - 2; k++){
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }

    for(int l = 1; l <= N; l++){
        cout << "*";
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