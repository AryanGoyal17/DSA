#include <bits/stdc++.h>
using namespace std;

void pattern(int N){
    for(int i = 1; i <= N; i++){
        
        for(int j = 1; j <= i; j++){
            cout << j;
        }

        for(int k = 1; k <= 2*(N - i); k++){
            cout << " ";
        }

        for(int l = i; l > 0; l--){
            cout << l;
        }
        cout << endl;
    }
}

int main(){

    int N;
    cin >> N;
    pattern(N);

    //Another approach -- initalize int space = 2(N-1) before outer loop and after endl decrement space by 2 -- space -= 2;

    //Space Complexity -- O(1)
    //Time Complexity -- O(N^2) [approx]

    return 0;
}