#include <bits/stdc++.h>
using namespace std;

void pattern(int N){
    for(int i = 1; i <= N; i++){
        if(!(i % 2 == 0)){
            for(int j = 1; j <= i; j++){
                if(!(j % 2 == 0)) cout << "1 ";
                else cout << "0 ";
            }
        }
        else{
            for(int k = 1; k <= i; k++){
                if(!(k % 2 == 0)) cout << "0 ";
                else cout << "1 ";
            }            
        }
        cout << endl;
    }
}

int main(){

    int N;
    cin >> N;
    pattern(N);

    //Space Complexity -- O(1)
    //Time Complexity -- O(N^2) [approx]

    return 0;
}