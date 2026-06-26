//find gcd/hcf -- optimized

//Euclidean-algorithm
//1 -- gcd(a,b) = gcd(a-b,b), a > b

//gcd(15,20) = gcd(15,5) = gcd(10,5) = gcd(5,5) = gcd(0, 5) --- when one becomes 0 -- the other is the gcd = 5
//but this also takes a lot of steps....

//2-- Optimized euclidean algo --- gcd(a,b) = gcd(a%b, b) , where a > b
//gcd(15,20) = gcd(15, 5) = gcd(0, 5) -- gcd = 5

//For the optimized solution we use the above equilateral algo(optimized form)

#include <bits/stdc++.h>
using namespace std;

int hcf(int n1, int n2){

    while((n1 > 0) && (n2 > 0)){
         
        if(n1 >= n2) n1 = n1 % n2;
        else n2 = n2 % n1;
    }

    if(n1 == 0) return n2;
    return n1;

}

int main(){

    int n1;
    int n2;
    cout << "Enter 2 numbers: ";
    cin >> n1 >> n2;
    
    int gcd = hcf(n1, n2);
    cout << "GCD of " << n1 << " and " << n2 << " is " << gcd;

    //Time complexity -- O(log(min(n1, n2))) -- base = x(changes based on n1,n2)
    //Space complexity -- O(1)

    return 0;
}