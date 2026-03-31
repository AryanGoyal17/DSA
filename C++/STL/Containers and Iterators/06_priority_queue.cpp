#include <bits/stdc++.h>
using namespace std;

int main(){

    //Priority Queue(default -- max heap) -- It is like a stack arranged in descending order from top(max heap)
    //                                    -- For min heap, its in ascending order from top..
    //                                    -- It is more like a stack than a queue..


    //Time-Complexity for Priority Queue --- push--O(logn), pop--O(logn), top--O(1)...

    priority_queue <int> pq;

    pq.push(2); //{2}
    pq.push(1); //{2,1}
    pq.push(7); //{7,2,1}
    pq.emplace(6); //{7,6,2,1}

    cout << pq.top() << endl;

    pq.pop(); //{6,2,1}
    cout << pq.top() << endl;

    //size, swap, empty function are same as others..

    //Minimum heap..

    //Initializing a minimum heap---
    priority_queue<int, vector <int>, greater<int>> min_pq;

    min_pq.push(2); //{2}
    min_pq.push(1); //{1,2}
    min_pq.push(7); //{1,2,7}
    min_pq.emplace(6); //{1,2,6,7}

    //Printing elements using loop(could be used for stacks and queues too..)

    while(!(min_pq.empty())){
        cout << min_pq.top() << " ";
        min_pq.pop();
    }
    cout << endl;

    //size, swap, empty function are same as others..

    return 0;
}