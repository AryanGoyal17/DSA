//Find factorial of a number(N) -- functional recursion

#include <bits/stdc++.h>
using namespace std;

int fn6(int N){

    if(N == 0) return 1;

    return (N * fn6(N - 1));

}

int main(){

    int N;
    cout << "Enter N: ";
    cin >> N;
    
    if(N < 0){
        cout << "Invalid";
    }
    else{
        int fact = fn6(N);
        cout << "Result: " << fact;
    }

    return 0;

    //Time complexity -- O(N)
    //Space complexity -- O(N)
}