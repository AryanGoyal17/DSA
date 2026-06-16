#include <bits/stdc++.h>
using namespace std;

void pattern(int n){

    int space = 2*n - 2;

    for(int i = 1; i <= 2*n - 1; i++){

        int stars = i;
        if(stars > n) stars = 2*n - i;

       for(int j = 1; j <= stars; j++){
        cout << "*";
       }

       for(int k = 1; k <= space; k++){
        cout << " ";
       }

       if(i >= n) space += 2;
       else space -= 2;

       for(int l = 1; l <= stars; l++){
        cout << "*";
       }

       cout << endl;
    }
}

int main(){

    int N;  //total lines in pattern
    cin >> N;

    int x = N/2; //number of lines above symmetry line
    pattern(x+1);

    //Time Complexity -- O(N^2)[approx]
    //Space Complexity -- O(1)

    //Both m1 and m2 are equally good, m2 is better for competitive programming while m1 is written as per standard software engineering.

    return 0;
}