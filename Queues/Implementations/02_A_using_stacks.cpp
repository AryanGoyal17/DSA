// Implementation of queues using stacks -- approach-1(push = expensive and pop, top = cheap)

#include <bits/stdc++.h>
using namespace std;

class Queue_Implementation {
    stack <int> s1;
    stack <int> s2;

    public:
            void push(int x){
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }

                s1.push(x);

                while(!s2.empty()){
                    s1.push(s2.top());
                    s2.pop();
                }
            }

            int pop(){

                if(s1.empty()){
                    return -1;
                }
                int front = s1.top();
                s1.pop();
                return front;
            }

            int peak(){

                if(s1.empty()) return -1;
                return s1.top();
            }

            bool isEmpty(){
                return s1.empty();
            }
};

//Time complexity -- Push(O(2N)), top and pop - O(1)
//Space complexity -- O(2N)

int main() {
    Queue_Implementation q;

    // 1. Test the push operation
    cout << "Pushing 10, 20, 30 into the queue..." << endl;
    q.push(10);
    q.push(20);
    q.push(30);

    // 2. Test peak and pop (Should behave like FIFO: 10, then 20, then 30)
    cout << "\nCurrent front element is: " << q.peak() << " (Expected: 10)" << endl;
    cout << "Dequeued element: " << q.pop() << " (Expected: 10)" << endl;
    
    cout << "New front element after dequeue: " << q.peak() << " (Expected: 20)" << endl;
    cout << "Dequeued element: " << q.pop() << " (Expected: 20)" << endl;

    // 3. Test empty condition
    cout << "\nIs the queue empty? " << (q.isEmpty() ? "True" : "False") << " (Expected: False)" << endl;

    // 4. Pop the last element and test underflow
    cout << "Dequeued element: " << q.pop() << " (Expected: 30)" << endl;
    cout << "Is the queue empty now? " << (q.isEmpty() ? "True" : "False") << " (Expected: True)" << endl;
    
    cout << "\nAttempting to dequeue from an empty queue: " << q.pop() << " (Expected: -1)" << endl;
    cout << "Attempting to peak an empty queue: " << q.peak() << " (Expected: -1)" << endl;

    return 0;
}