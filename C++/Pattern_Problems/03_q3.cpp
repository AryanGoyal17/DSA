#include <bits/stdc++.h>
using namespace std;

void pattern(int N){
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j <= i; j++){
           cout << j + 1;
        }
        cout << endl;
    }

}

int main(){

    int N;
    cin >> N;
    pattern(N);
  
    //Time complexity --- O(N(N+1)/2), approximate -- O(N^2)
    //Space complexity -- O(1)

    //Method-2-- initialize i and j as 1 inside loop and print j instead of j + 1..This method is more readable however the space and time complexity remains the same..
    

    return 0;
}