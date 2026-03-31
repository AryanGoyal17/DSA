#include <bits/stdc++.h>
using namespace std;

int main(){

    //Dq(deque) == A deque allows to use the bracket operator [] to access elements like in vectors but also has front ops like in list

    //Memory storage in dq, vector, list ... in gemini chat of dsa ... --DONE

    //NOTE: [] operator cant be used in list..

    deque <int> dq; //Initializing a deque..

    dq.push_back(1); // {1}
    dq.emplace_back(2); //{1, 2}
    dq.push_front(3); // {3, 1, 2}
    dq.emplace_front(4); // {4, 3, 1, 2}

    dq.pop_back(); // {4, 3, 1}
    dq.pop_front(); // {3, 1}

    cout << dq.front() << endl; //Same as dq[0]
    cout <<  dq.back() << endl; //Same as dq[dq.size() - 1]

//Other functions like begin, end, rbegin, rend, clear, insert, size , swap are same as vectors

    return 0;
}