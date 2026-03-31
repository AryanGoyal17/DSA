#include <bits/stdc++.h>
using namespace std;

int main(){

    //List -- Stores data in a scattered manner rather than a contiguous manner(as in vectors).. 
    //     -- It is executed as a doubly linked list in c++
    //     -- Unlike vectors it also has FRONT OPERATIONS like push_front, emplace_front..

    //Working of iterator in list -- done...(in NOTION..)

    list <int> ls1;

    ls1.push_back(1); // ls1 = {1}
    
    ls1.emplace_back(3); // ls1 = {1,3}


//Front ops -- push_front, emplace_front..

    ls1.push_front(5); // ls1 = {5,1,3}

    ls1.emplace_front(7); // ls1 = {7, 5, 1, 3}


    //NOTE:
    ls1.emplace_front(); //ls1 = {0, 7, 5, 1, 3} //If we dont give any number in ops like push_front then 0 is taken as the number.
    /////

    ls1.pop_front(); //ls1 = {7, 5, 1, 3}

    for(auto it = ls1.begin(); it != ls1.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

     cout << ls1.back() << " " << ls1.front();

//NOTE: -- front ops of list are faster and have less time complexity compared to vector insert operation since list executes
//         as a doubly linked list......
 


//Other functions like begin, end, rbegin, rend, clear, insert, size , swap are same as vectors

    return 0;
}