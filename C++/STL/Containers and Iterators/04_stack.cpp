#include <bits/stdc++.h>
using namespace std;

int main(){

    //Stack -- LIFO(Last-In-First-Out)

    //      -- push, pop, top are main 3 functions..
    //      -- Stack ops have a time complexity -- O(1) .. i.e; stack ops occur in constant time..
    
    //      -- Stack doesnt follow indexing like list..

    //      -- begin(), end() and range based for loops cant be used in stack.
    //      -- Stack doesnt have iterators!!

    //NOTE: -- Unlike vector, list, dq .. a stack cant be assigned using curly braces {}
    // stack <int> s1 = {1, 2, 3};
    // stack <int> s2 = {3, 2, 4};

    stack <int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);  // {5, 4, 3, 2, 1}

    cout << st.top() << endl;

    st.pop();

    cout << st.top() << endl;
    cout << st.size() << endl;

    cout << st.empty() << endl; //1 if True, 0 if False..

    //Swapping 2 stacks --

    stack <int> s1, s2;
    s1.swap(s2); //s1 and s2 get swapped. //s2.swap(s1) works the same..

    return 0;
}