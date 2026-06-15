#include <bits/stdc++.h>
using namespace std;

void pattern(int N){

    int start = 1;
   
    for(int i = 1; i <= N; i++){

        for(int j = 1; j <= i; j++){
            cout << start << " ";
            start++;
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