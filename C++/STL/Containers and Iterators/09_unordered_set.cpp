#include <bits/stdc++.h>
using namespace std;

int main(){

    //Unordered Set -- unique elements, not sorted!!

    //1-- lower bound and upper bound doesnt work, rest fn's are similar as in set..
    //2-- Time complexity for unordered set ops -- O(1), constant time.. except in worst case(collision happens) -- then it becomes O(N), linear


    //3-- Intitializing, assigning unordered set

    unordered_set <int> s1;
    unordered_set <int> s2 = {6,5,4,7,1,2,3,4, 6,5};

    cout << s2.size(); //ONLY UNIQUE ELEMENTS ARE STORED IN UNORDERED SET... SIZE = 7 , NOT 10...

    //Other things and functions are completely similar to set..

    return 0;
}