#include <bits/stdc++.h>
using namespace std;

int main(){

    // Queue -- FIRST-IN-FIRST-OUT (FIFO)
    // Queue -- All the ops occur in constant time -- O(1) [Time complexity = order of 1]

    // Queue -- doesnt have any indexing , iterator(begin, end etc.. NOT there), assignment through curly braces..

    queue <int> q1;

    q1.push(1); //{1}
    q1.push(2); //{1,2}
    q1.push(3); //{1,2,3}
    q1.emplace(4); //{1,2,3,4}

    q1.pop(); //{2,3,4}

    cout << q1.size() << " " << q1.front() << " " << q1.back() << endl;

    //size, swap, empty methods same as in stack..
    
    return 0;
}