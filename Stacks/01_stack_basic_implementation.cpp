// This is an implementation of push op of stacks --

#include <bits/stdc++.h>
using namespace std;

class Stack{

    int top;
    int size;
    int *stack_arr;

    public:

        Stack(int sizeOfStack){

            size = sizeOfStack;
            top = -1;
            stack_arr = new int[size];
        }

        void push(int value){

            if(top == size - 1){
                cout << "Overflow condition" << endl;
                return;
            }

            top++;
            stack_arr[top] = value;
            cout << "Value added in stack = " << value << endl;
        }

        int pop(){

            if(top == -1){
                cout << "Underflow condition" << endl;
                return -1;
            }

            
            int pop_val = stack_arr[top];
            top--;
            return pop_val;
        }

        int peek(){
            if(top > -1 && top < size){
                return stack_arr[top];
            }
            return -1;
        }
};


int main(){

    Stack s1(5);
    
    s1.push(10);
    s1.push(15);
    s1.push(5);

    cout << "Popped value = " << s1.pop() << endl;
    cout << "Popped value = " << s1.pop() << endl;

    cout << "Value at top = " << s1.peek() << endl;

    s1.pop();
    s1.pop();

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);
    s1.push(7);

    return 0;
}