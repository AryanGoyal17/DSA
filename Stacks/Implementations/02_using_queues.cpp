// Implementation of Stacks using Queues

#include <bits/stdc++.h>
using namespace std;

class Stack_Implementation {

    queue <int> q;

    public:
            void push(int x){

                int size = q.size();
                q.push(x);

                for(int i = 0; i < size; i++){
                    q.push(q.front());
                    q.pop();
                }
            }

            int pop(){
                if(q.empty()) return -1;
                int topVal = q.front();
                q.pop();
                return topVal;
            }

            int top(){
                if(q.empty()) return -1;
                return q.front();
            }

            bool empty(){
                return q.empty();
            }
};

//Time complexity = O(N) [push], rest operations O(1)
//Space complexity = O(N) [size of queue]


int main() {
    Stack_Implementation myStack;

    // 1. Test the push operation
    cout << "Pushing 10, 20, 30 onto the stack..." << endl;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // 2. Test top and pop (Should behave like LIFO: 30, then 20, then 10)
    cout << "\nCurrent top element is: " << myStack.top() << " (Expected: 30)" << endl;
    cout << "Popped element: " << myStack.pop() << " (Expected: 30)" << endl;
    
    cout << "New top element after pop: " << myStack.top() << " (Expected: 20)" << endl;
    cout << "Popped element: " << myStack.pop() << " (Expected: 20)" << endl;

    // 3. Test empty condition
    cout << "\nIs the stack empty? " << (myStack.empty() ? "True" : "False") << " (Expected: False)" << endl;

    // 4. Pop the last element and test underflow
    cout << "Popped element: " << myStack.pop() << " (Expected: 10)" << endl;
    cout << "Is the stack empty now? " << (myStack.empty() ? "True" : "False") << " (Expected: True)" << endl;
    
    cout << "\nAttempting to pop from an empty stack: " << myStack.pop() << " (Expected: -1)" << endl;
    cout << "Attempting to get top of an empty stack: " << myStack.top() << " (Expected: -1)" << endl;

    return 0;
}