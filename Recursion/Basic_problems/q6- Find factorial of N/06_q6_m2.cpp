// Find factorial of N -- using loops

#include <bits/stdc++.h>
using namespace std;

void fn6(int N){

    int fact = 1;

    for(int i = 1; i <= N; i++){

        fact = fact * i;
        
    }

    cout << "Result: " << fact;

}

int main(){

    int N;
    cout << "Enter N: ";
    cin >> N;
    
    if(N < 0){
        cout << "Invalid";
    }
    else{
        fn6(N);
    }

    return 0;

    //Time complexity -- O(N)
    //Space complexity -- O(1)
}