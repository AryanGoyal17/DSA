#include <bits/stdc++.h>
using namespace std;

bool comp(pair <int, int> p1, pair <int, int> p2){

    if(p1.second < p2.second) return true; //in correct order
    if(p1.second > p2.second) return false; //NOT in correct order..
    if(p1.first >= p2.first) return true;
    return false;

}

int main(){

    //Comparator -- self-written boolean function
    //An example -- later used in 01_B_Sorting.cpp is present above.. used for sorting array of pairs in a different given manner.

    //The above comp is written for sorting -- (if second element of pair is greater, swap... if second elements equal, then sort by first element in descending order..)

    return 0;
}