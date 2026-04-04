#include <bits/stdc++.h>
using namespace std;

int main(){

    //Map -- like a python dictionary... key_value pairs are there..

    //Keys in a map -- unique and sorted!
    //Values in a map -- need NOT be unique..

    //1--

    map <int, int> m1;

    m1[1] = 2; // {{1,2}}

    m1.insert({2,3});
    m1.emplace(3,2);
    m1.emplace(4,3); // {{1,2}, {2,3}, {3,2}, {4,3}}

    map <pair<int, int>, int> m2;

    m2[{1,2}] = 10; // {{{1,2},10}} // key -- {1,2} , value -- 10

    //2-- Printing a map

    //A---

    //IDENTIFY THE ERROR!!??

    // for(auto it : m1){
    //     cout << it.first << '->' << it.second << endl;
    // }

    for(auto it : m1){
        cout << it.first << "->" << it.second << endl;
    }
    cout << endl;

    //B--

    for(map <int, int> :: iterator i1 = m1.begin(); i1 != m1.end(); i1++){

        cout << i1->first << "->" << i1->second << endl;
        
    }
    cout << endl;

    //C--

    for(auto i2 = m1.begin(); i2 != m1.end(); i2++){

        cout << i2->first << "->" << i2->second << endl;
        
    }
    cout << endl;

    //3-- 

    cout << m1[1] << endl;

    auto i3 = m1.find(3);
    cout << i3 -> second << endl; //arrow operator is used..

    auto i4 = m1.find(10); //Since 10th key is not present, this points to the end.. same as m1.end()

    //4-- lower bound and upper bound in a map..(looks at keys only, same as in set..)

    map <int, int> m3 = {{10,1}, {20,2}, {30,3}, {40,4}, {50,1}, {60,0}}; //MAPS CAN BE ASSIGNED USING CURLY BRACES!!

    auto it6 = m3.lower_bound(25); // Points to key, value pair with key = 30 //to access key, value use arrow operator with first and second..
    auto it7 = m3.lower_bound(30); // Points to key, value pair with key = 30 //to access key, value use arrow operator with first and second..
    auto it8 = m3.upper_bound(25); // Points to key, value pair with key = 30 //to access key, value use arrow operator with first and second..
    auto it9 = m3.upper_bound(40); // Points to key, value pair with key = 50 //to access key, value use arrow operator with first and second..
    auto it10 = m3.lower_bound(100); // Points to end -- m3.end()
    auto it11 = m3.upper_bound(100); // Points to end -- m3.end()

    //erase, swap, size, empty same as in other containers...

    return 0;
}