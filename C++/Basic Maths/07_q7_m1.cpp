//gcd/hcf -- Brute-force

#include <bits/stdc++.h>
using namespace std;

int hcf(int n1, int n2){

    for(int i = min(n1, n2); i >= 1; i--){
        if((n1 % i == 0) && (n2 % i == 0)) return i;
    }

    return 1; //to fix the warning(control reaches end of non-void fn)
}

int main(){

    int n1;
    int n2;
    cout << "Enter 2 numbers: ";
    cin >> n1 >> n2;
    
    int gcd = hcf(n1, n2);
    cout << "GCD of " << n1 << " and " << n2 << " is " << gcd;

    //Time complexity -- O(min(n1, n2))
    //Space complexity -- O(1)

    return 0;
}