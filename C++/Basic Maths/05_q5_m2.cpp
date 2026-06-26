// Print all divisors -- in a sorted manner(ascending)

#include <bits/stdc++.h>
using namespace std;

void print_div(int N){

    vector <int> div;

    //-- O(sqrt(N)) -- tc1
    
    for(int i = 1; i*i <= N; i++){ //could have done i <= sqrt(N) -- but since sqrt is also a fn, its called every iteration-- takes more time
        if(N % i == 0){

             div.push_back(i);

             if(N/i != i){
                 div.push_back(N/i);
             }
             
        } 
        
    }


    //O(k*logk) -- k = number of factors(elements) in div -- tc2
    sort(div.begin(), div.end());

    //O(k) -- tc3
    for(auto it : div){
        cout << it << " ";
    }

}

int main(){

    int N;
    cout << "Enter a number: ";
    cin >> N;
    
    cout << "Divisors of " << N << " -- ";
    print_div(N);

    //Time complexity -- tc1 + tc2 + tc3
    //Space complexity -- O(1)

    return 0;
}