// Implementation of stack using linked list

#include <bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

class Stack {
private:
    Node* topNode;
    int stackSize;

public:
    Stack() {
        topNode = nullptr;
        stackSize = 0;
    }

    void push(int x) {
        Node* temp = new Node(x);
        temp->next = topNode;
        topNode = temp;
        stackSize++;
    }

    int pop() {
        if (topNode == nullptr) {
            cout << "Underflow!\n";
            return -1; // Fixed: Returning an integer value on underflow
        }
        Node* temp = topNode;
        int popped_val = temp->data;
        topNode = topNode->next;
        delete temp;
        stackSize--;
        return popped_val;
    }

    int peek() { // Renamed from top() to avoid collision with topNode pointer
        if (topNode == nullptr) {
            cout << "Stack is Empty!\n";
            return -1;
        }
        return topNode->data;
    }

    int getSize() { // Renamed from size() to avoid collision with stackSize
        return stackSize;
    }

    bool isEmpty() {
        return topNode == nullptr;
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.peek() << '\n';     // 30
    cout << "Popped element: " << st.pop() << '\n';   // 30
    cout << "Current size: " << st.getSize() << '\n'; // 2

    return 0;
}

//Time complexity = O(1) [all operations]
//Space complexity = O(No of elements in stack)