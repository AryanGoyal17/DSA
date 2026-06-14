#include <bits/stdc++.h>
using namespace std;

void pattern(int N){
    
    for(int i = 1; i <= 2*N - 1; i++){

        int stars = i;
        if(stars > N) stars = 2*N - i;
        for(int j = 1; j<=stars; j++){
            cout << "*";
        }
        cout << endl;

    }
}

int main(){

    int N;
    cout << "Enter the number of rows above symmetry line: ";
    cin >> N;
    pattern(N+1);

    //Symmetry is involved here. There can be other methods to do this by combining patters.

    //Space Complexity -- O(1)
    //Time Complexity(approximate) -- O(N^2)

    return 0;
}