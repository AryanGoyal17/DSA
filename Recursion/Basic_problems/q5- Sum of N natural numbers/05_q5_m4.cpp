//Sum of N numbers --- Parameterized recursion

//m2 in comments below is for parameterized recursion with 2 parameters

#include <bits/stdc++.h>
using namespace std;

void fn5(int i, int N, int sum){

    if(i > N){
        cout << "Result: " << sum;
        return;
    }
    
    fn5(i + 1, N, sum + i); //recursive call 

    //m2 -- recursive call = fn5(i - 1, sum + i); 
    //m2 -- base case = if(i < 1) print sum and then return

}

int main(){

    int N;
    cout << "Enter N: ";
    cin >> N;

    int sum = 0;

    if(N <= 0){ //N <= 0 checked only once, if its kept in fn its checked N times
        cout << "Invalid";
    }
    else{
        fn5(1, N, sum); //m2 for parameterized -- fn5(N, sum)
    }

    //Time complexity -- O(N), n fn calls
    //Space complexity -- O(N), N = stack space used for recursive calls

    return 0;
}