// Naive Pattern Matching --

// Given a text string T of length n and a pattern string P of length m,
// write an algorithm to find all occurrences (starting indices) of pattern P in text T. 
// using the Naive (Brute-Force) Pattern Matching approach. Analyze its time and space complexity.

// Commented Logic of found boolean is another method to do this!

#include <bits/stdc++.h>
using namespace std;

int main(){

    string T = "ABABCCBAABC";
    string P = "ABC";

    int n = T.size();
    int m = P.size();


    cout << "Indices at which pattern P occurs in T = ";
    for(int i = 0; i <= n - m; i++){

        int j = 0;

        // bool found = false;

        // if(T[i] == P[0]){

            // found = true;

            for(j = 0; j < m; j++){
                if(T[i + j] != P[j]){
                    // found = false;
                    break;
                }
            }

            // if(found){
            //     cout << i << " ";
            // }

            if(j == m){
                cout << i << " ";
            }
        // }
    }

    //Time complexity = O((n-m + 1)*m) = O(nm - m^2 + m) = O(nm) {approximately}
    //Space complexity = O(1)
    

    return 0;
}