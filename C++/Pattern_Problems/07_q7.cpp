#include <bits/stdc++.h>
using namespace std;

void pattern(int N){
      
    for(int i = 0; i < N; i++){

        for(int j = 0; j < N - i - 1; j++){
           cout << " ";
        }

        for(int k = 0; k < 2*i + 1; k++){
            cout << "*";
        }

      cout << endl;
    }

}
int main(){

    int N;
    cin >> N;
    pattern(N);

    //Space complexity -- O(1)
    //Time complexity -- approximate -- O(N^2)

    return 0;
}
