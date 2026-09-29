// Implementation of queues using Linked List

#include <bits/stdc++.h>
using namespace std;

class Node {

    public:

        int data;
        Node* next;

    public:

        Node(int data1, Node* next1 = nullptr){
            data = data1;
            next = next1;
        }
};

class Queue_Implementation_LL {

    private:
        Node* start;
        Node* end;
        int queueSize;

    public:
        Queue_Implementation_LL() {
            start = nullptr;
            end = nullptr;
            queueSize = 0;
        }

        void push(int x){

            Node* temp = new Node(x);
            queueSize++;

            if(isEmpty()){
                start = temp;
                end = temp;
            }
            else{
                end -> next = temp;
                end = temp;
            }
        }

        int pop(){

            if(isEmpty()){
                cout << "Underflow!" << '\n';
                return -1;
            }

            Node* temp = start;
            int popped_val = temp -> data;
            start  = start -> next;

            if(start == nullptr){ // To prevent dangling end pointer
                end = nullptr;
            }

            delete temp;
            queueSize--;
            return popped_val;
        }

        int size(){
            return queueSize;
        }

        int front(){
            if(isEmpty()){
                cout << "Queue is Empty" << '\n';
                return -1;
            }

            return start -> data;
        }

        int back(){
            if(isEmpty()){
                cout << "Queue is Empty" << '\n';
                return -1;
            }

            return end -> data;
        }

        bool isEmpty(){
            return start == NULL;
        }

};

//Time complexity = O(1) [all ops]
//Space complexity = O(N) [N = no of elements in queue]

int main() {
    Queue_Implementation_LL q;

    cout << "=== 1. INITIAL STATE ===" << endl;
    cout << "Is Empty? " << (q.isEmpty() ? "Yes" : "No") << endl; // Yes
    cout << "Current Size: " << q.size() << endl;                // 0
    cout << "Front: " << q.front() << endl;                     // Queue is Empty -> -1
    cout << "Back: " << q.back() << endl;                       // Queue is Empty -> -1
    cout << endl;

    cout << "=== 2. PUSH OPERATIONS ===" << endl;
    cout << "Pushing 10, 20, 30..." << endl;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Is Empty? " << (q.isEmpty() ? "Yes" : "No") << endl; // No
    cout << "Current Size: " << q.size() << endl;                // 3
    cout << "Front Element: " << q.front() << endl;              // 10
    cout << "Back Element: " << q.back() << endl;                // 30
    cout << endl;

    cout << "=== 3. POP OPERATIONS ===" << endl;
    cout << "Popped element: " << q.pop() << endl;               // 10
    cout << "Front element now: " << q.front() << endl;          // 20
    cout << "Current Size: " << q.size() << endl;                // 2
    cout << endl;

    cout << "=== 4. TESTING SINGLE-ELEMENT RESET ===" << endl;
    cout << "Popping remaining elements..." << endl;
    cout << "Popped element: " << q.pop() << endl;               // 20
    cout << "Popped element: " << q.pop() << endl;               // 30

    cout << "Is Empty after emptying? " << (q.isEmpty() ? "Yes" : "No") << endl; // Yes
    cout << "Current Size: " << q.size() << endl;                // 0
    cout << endl;

    cout << "=== 5. UNDERFLOW & RE-PUSH TEST ===" << endl;
    cout << "Attempting to pop from empty queue:" << endl;
    q.pop(); // Prints Underflow! -> returns -1

    cout << "\nRe-pushing 100 after complete drain..." << endl;
    q.push(100);
    cout << "Front: " << q.front() << " | Back: " << q.back() << endl; // 100 | 100
    cout << "Current Size: " << q.size() << endl;                     // 1

    return 0;
}