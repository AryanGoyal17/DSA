#include <bits/stdc++.h>
using namespace std;

void pattern1(int n){

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= n - i + 1; j++){
            cout << "*";
        }

        for(int k = 0; k < 2*(i - 1); k++){
            cout << " ";
        }

        for(int l = 1; l <= n - i + 1; l++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n){

    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= i; j++){
            cout << "*";
        }

        for(int k = 0; k < 2*(n - i); k++){
            cout << " ";
        }

        for(int l = 1; l <= i; l++){
            cout << "*";
        }
        cout << endl;
    }
}


int main(){

    int N;
    cin >> N;
    pattern1(N/2);
    pattern2(N/2);

    //Time Complexity -- O(N^2) [approx]
    //Space Complexity -- O(1)
}