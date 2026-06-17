//Reversing a number

#include <bits/stdc++.h>
using namespace std;

long long reverse(long long x){

    //Approach-1 on leetcode(incorrect)

//     class Solution {
// public:
//     int reverse(int x) {

//         int num = abs(x);

//         if(x == 0) return 0;

//         int numDigit = int(log10(num) + 1);
//         long long int reverse = 0;

//         for(int i = numDigit - 1; i >= 0; i--){
//             int digit = x % 10;
//             x = x / 10;

//             reverse += (pow(10, i)*digit);
//         }

//         if(reverse > INT_MAX || reverse < INT_MIN) return 0; 
        
//         return reverse;
//     }
// };


//Problems arised until righting above code--

//1-- first it didnt work for x = 0
//2-- then it didnt work due to overflow (64 bit integers werent allowed, so long long and INT_MAX etc used to fix it)
// --- passed on 1023/1045 test cases.

//3-- but now it doesnt work due to assymetrical boundaries of 32-bit integers.!


//Key Learnings--

//1-- Dont use pow() in cp as it returns floating point decimals and is not accurate thus giving precision errors for large numbers.
//2-- For leetcode problem condition abs() cant be used due to assymetrical boundaries of 32-bit integers

//Final code-----


        // if(x == 0) return 0; // No need of this -- its redundant x = 0, already returns 0


        long long reversed_num = 0;

        while(x != 0){
            int digit = x % 10;
            x = x / 10;

            // if(reversed_num > INT_MAX / 10) return 0; //This was done for leetcode problem constraints
            // if(reversed_num < INT_MIN / 10) return 0;

            reversed_num = reversed_num*10 + digit;
        }
        return reversed_num;
}

int main(){
    
    cout << "Enter a number: ";
    long long num;
    cin >> num;

    long long reversed_num = reverse(num);

    cout << "Reversed number: " << reversed_num;

    //Time complexity -- O(logn) [base10]
    //Space Complexity -- O(1)

    return 0;
}