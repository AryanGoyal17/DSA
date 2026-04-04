#include <bits/stdc++.h>
using namespace std;

int main(){


    //Multi-set -- Sorted in ascending order but multiple occurences of 1 element can be present unlike set..

    //1--- Assignment and insertion

    multiset <int> s1;

    s1.insert(1);
    s1.insert(3);
    s1.insert(1);
    s1.insert(2); // {1, 1, 2, 3}

    multiset <int> s2 = {1,1,1,1, 2, 3,3, 4};

    //2-- count

    cout << s2.count(1) << endl;

    //3-- erase

    //A--
    s2.erase(1); //{2, 3,3, 4} //All occurences of 1 deleted
    
    //B--
    auto it1 = s2.find(3); //Points at first 3
    s2.erase(it1); //First occurence of 3 deleted.. // {2,3,4}

    //
    s2.insert(3);
    s2.insert(3);
    s2.insert(3); // {2, 3,3,3,3, 4};
    //

    //C--

    // s2.erase(it1, it1 + 2); //NOTE: For iterators in set, multiset type structures.. iterators dont jump forward backward , they move up and down as data is present in a tree-like structure instead of a linear container..

    auto start_it = s2.find(3);
    auto end_it = next(start_it, 2); //IMPORTANT!!

    s2.erase(start_it, end_it); //[begin, end)

    cout << s2.count(3); //two 3's erased..

    return 0;
}