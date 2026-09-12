// Implementation of queues using stacks -- approach-2(push = cheap and pop, top = expensive)

#include <bits/stdc++.h>
using namespace std;

class Queue_Implementation {
    stack <int> s1, s2;

    public:
            void push(int x){
                s1.push(x);
            }

            int pop(){
                if(!s2.empty()){
                    int popped_val = s2.top();
                    s2.pop();
                    return popped_val;
                }
                else{
                    while(!s1.empty()){
                        s2.push(s1.top());
                        s1.pop();
                    }

                    if(s2.empty()) return -1;
                }
                    int popped_val = s2.top();
                    s2.pop();
                    return popped_val;
            }

            int peak(){
                if(!s2.empty()){
                    return s2.top();
                }
                else{
                    while(!s1.empty()){
                        s2.push(s1.top());
                        s1.pop();
                    }

                    if(s2.empty()) return -1;
                }
                return s2.top();
            }

            bool isEmpty(){
                return s1.empty() && s2.empty();
            }
};

//Time complexity -- Push(O(1)), top and pop - O(1) - sometimes, O(N) - occasionally
//Space complexity -- O(N) --- total no of elements <= N [this was the case in approach 1 too!!]

int main() {
    Queue_Implementation q;

    // 1. Test basic push and pop
    cout << "Pushing 10, 20, 30..." << endl;
    q.push(10);
    q.push(20);
    q.push(30);

    // This triggers the O(N) transfer from s1 to s2
    cout << "\nDequeued: " << q.pop() << " (Expected: 10)" << endl; 
    
    // 2. Test pushing while s2 already has elements
    cout << "Pushing 40..." << endl;
    q.push(40); 

    // These should be O(1) and read directly from s2
    cout << "Dequeued: " << q.pop() << " (Expected: 20)" << endl; 
    cout << "Front element is: " << q.peak() << " (Expected: 30)" << endl;
    cout << "Dequeued: " << q.pop() << " (Expected: 30)" << endl;

    // 3. Test the secondary transfer and empty checks
    cout << "Dequeued: " << q.pop() << " (Expected: 40)" << endl; // Triggers transfer of 40
    cout << "\nIs the queue empty? " << (q.isEmpty() ? "True" : "False") << " (Expected: True)" << endl;

    // 4. Test underflow
    cout << "Attempting to dequeue from empty: " << q.pop() << " (Expected: -1)" << endl;
    cout << "Attempting to peak from empty: " << q.peak() << " (Expected: -1)" << endl;

    return 0;
}