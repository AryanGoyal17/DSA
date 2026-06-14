#include <bits/stdc++.h>
using namespace std;

void pattern1(int N){

    for(int i = 1; i <= N; i++){

        for(int j = 1; j <= N - i; j++){
            cout << " ";
        }

        for(int k = 1; k <= 2*i - 1; k++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int N){

    for(int i = 1; i <= N; i++){

        for(int j = 1; j < i; j++){
            cout << " ";
        }

        for(int k = 1; k <= 2*(N - i) + 1; k++){
            cout << "*";
        }
        cout << endl;
    }

}

int main(){

    int N;
    cin >> N;
    pattern1(N);
    pattern2(N);

    //Here we combine 2 patterns to form the required pattern.

    //Time Complexity(approximate) -- O(N^2)
    //Space Complexity -- O(1)

    return 0;
}