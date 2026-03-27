#include <bits/stdc++.h>
using namespace std;

int main(){

    //1--TC
    //Time Complexity(NOT time taken for code to execute!) -- Rate at which the time taken increases wrt the input size..
    //Time taken for code to execute(NOT time complexity) -- is dependent on system configurations..

    //2--
    //TC is denoted by big O notation..

    //3-- THREE RULES-- 
    //A--- TC is calculated as per the worst case scenario..
    //B--- Avoid constants..
    //C--- Avoid lower values..  

    //4-- Example--
    //Q--What is TC of code below??

    int x;
    int N = 10; //Can be any +ve integer by taking user input..
    for(int i = 1; i <= N; i++){
        cout << "Aryan" << endl;
    }

    //Ans-- O(3N + 3) -- By rule2 -- Ans(correct) -- O(3N)

    //5-- Rule_1 Explanation
    //--- Best, Average , Worst case scenarios.. (example-- if-else statements)..

    //6-- Rule_2 and Rule_3 Explanation -- Signficance of lower values and constants is negligible when working with large input sizes
    
    //7-- Different notations used to represent complexity --

    //A-- Big O notation-- Highest,Upper-bound, Worst case complexity
    //B-- Theta notation -- Average case complexity
    //C-- Omega notation -- Lowest-bound, Best case complexity

    ////
    //8-- Questions-- Compute TC
    ////

    //Q1-- 

    // for(i = 0; i< N; i++){
    //     for(j = 0; j < N; j++){
    //         //code
    //     }
    // }

    //Answer -- O(N^2) .. lower values and constants avoided

    //Q2--

    // for(i = 0; i< N; i++){
    //     for(j = 0; j <= i; j++){
    //         //code
    //     }
    // }

    //Answer -- O(N(N+1) / 2) [Exact Time complexity]
    //       -- O(N^2) [Approximate Time complexity]

    ////


    return 0;
}

