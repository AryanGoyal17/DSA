#include <bits/stdc++.h>
using namespace std;

int main(){

    //Set -- elements are unique and sorted in ascending order..
    

    //1-- Set is not a linear container , a tree is maintained..

    //A--
    set <int> s1;

    s1.insert(1); // {1}
    s1.insert(3); // {1, 3}
    s1.insert(3); // {1, 3}
    s1.insert(2); // {1, 2, 3}

    s1.emplace(0); // {0, 1, 2, 3}

    //B--
    //NOTE: Functionality of insert of vectors can be used also -- this increases efficiency..
    //NOTE: begin, end, rbegin, rend, size, empty, swap are same as in vectors..

    //C--
    auto it1 = s1.find(2); //returns an iterator pointing at 2
    auto it2 = s1.find(7); //When an element is not present, then it returns an iterator pointing after 3 like end..

    //D--

    //1--
    s1.erase(3); //Time complexity = O(logn) // {0, 1, 2}

    //2--
    auto it3 = s1.find(1);
    s1.erase(it3); //Time complexity = O(1) // {0, 2}

    //3--

    s1.insert(1);
    s1.insert(3); // {0, 1, 2, 3}

    auto it4 = s1.find(1);
    auto it5 = s1.find(3);

    s1.erase(it4, it5); // {0, 3} //last one is not inclusive // [begin, end)

    //E-- count method

    //NOTE: count method returns either 0(if NOT present) or 1(if present)...
    int cnt1 = s1.count(0); // cnt1 = 1

    //F-- Searching for element in set (Time complexity = O(logn))

    //lower bound -- points to element >= x
    //upper bound -- points to element > x

    set <int> s2 = {10, 20, 30, 40, 50, 60}; //SETS CAN BE ASSIGNED USING CURLY BRACES!!

    auto it6 = s2.lower_bound(25); // Points to 30
    auto it7 = s2.lower_bound(30); // Points to 30
    auto it8 = s2.upper_bound(25); // Points to 30
    auto it9 = s2.upper_bound(40); // Points to 50
    auto it10 = s2.lower_bound(100); // Points to end
    auto it11 = s2.upper_bound(100); // Points to end



    //G-- Time complexity of Set operations..

    // In set everything(insert, erase etc..) , happens in O(logn)
    //NOTE: erasing element using iterator happens in constant time O(1)

    return 0;
}