// Implementing stack using arrays

#include <bits/stdc++.h>
using namespace std;

class Stack_implementation {
    
    private:
            int* stackArray;
            int capacity;
            int top_index;
    public:
            Stack_implementation(int size){
                capacity = size;
                stackArray = new int[capacity];
                top_index = -1;
            }

            ~Stack_implementation(){
                delete[] stackArray;
            }

            void push(int x){

                if(top_index >= capacity - 1){
                    cout << "Overflow condition" << endl;
                    return;
                }

                stackArray[++top_index] = x;
            }

            int pop(){
                if(top_index < 0){
                    cout << "Underflow condition" << endl;
                    return -1;
                }
                
                return stackArray[top_index--];
            }

            int top(){
                if(top_index < 0){
                    cout << "Stack is empty" << endl;
                    return -1;
                }
                return stackArray[top_index];
            }

            bool isEmpty(){
                return top_index == -1;
            }
};

//Testing the implementation  ----

int main() {
    
    // 1. Create a stack with a maximum capacity of 3
    Stack_implementation myStack(3);

    // 2. Test the push operation
    cout << "Pushing 10, 20, 30 onto the stack..." << endl;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // 3. Test the Overflow condition
    cout << "\nAttempting to push 40 (should trigger overflow):" << endl;
    myStack.push(40);

    // 4. Test the top and pop operations
    cout << "\nCurrent top element is: " << myStack.top() << " (Expected: 30)" << endl;
    cout << "Popped element: " << myStack.pop() << " (Expected: 30)" << endl;
    cout << "New top element after pop: " << myStack.top() << " (Expected: 20)" << endl;

    // 5. Test isEmpty
    cout << "\nIs the stack empty? " << (myStack.isEmpty() ? "True" : "False") << " (Expected: False)" << endl;

    // 6. Test the Underflow condition
    cout << "\nPopping remaining elements..." << endl;
    myStack.pop(); // Pops 20
    myStack.pop(); // Pops 10
    cout << "Attempting to pop from an empty stack (should trigger underflow):" << endl;
    myStack.pop();


    //Time complexity of all stack ops = O(1)
    //Space complexity = O(size)

    return 0;

}



