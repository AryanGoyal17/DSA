// Implementation of circular queues using arrays

// NOTE: For implementing a normal queue -- in enque and deque just do rear++ and front++ respectively instead of using modulo(%).

#include <bits/stdc++.h>
using namespace std;

class Queue_Implementation {
    private:
            int* queue_arr;
            int front;
            int rear;
            int currentSize;
            int maxSize;

    public:
            Queue_Implementation(int size){
                maxSize = size;
                queue_arr = new int[maxSize];
                front = -1;
                rear = -1;
                currentSize = 0;
            }

            ~Queue_Implementation(){
                delete [] queue_arr;
            }

            void enque(int x){

                if(currentSize >= maxSize){
                    cout << "Overflow condition" << endl;
                    return;
                }

                if(currentSize == 0){
                    front = 0;
                    rear = 0;
                }
                else{
                    rear = (rear + 1) % maxSize;
                }

                queue_arr[rear] = x;
                currentSize++;
            }

            int deque(){
                if(currentSize <= 0){
                    cout << "Underflow condition" << endl;
                    return -1;
                }

                int elem = queue_arr[front];

                if(currentSize == 1){
                    front = -1;
                    rear = -1;
                }
                else{
                    front = (front + 1) % maxSize;
                }

                currentSize--;
                return elem;
            }

            int peak(){
                if(currentSize <= 0){
                    cout << "Queue is empty" << endl;
                    return -1;
                }

                return queue_arr[front];
            }

            bool isEmpty(){
                return currentSize == 0;
            }
};

int main() {
    Queue_Implementation q(3);

    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40); // Should trigger overflow

    cout << "Front element: " << q.peak() << endl; // Expected: 10
    cout << "Dequeued: " << q.deque() << endl;     // Expected: 10

    q.enque(50); // Tests the circular wrap-around

    cout << "Dequeued: " << q.deque() << endl; // Expected: 20
    cout << "Dequeued: " << q.deque() << endl; // Expected: 30
    cout << "Dequeued: " << q.deque() << endl; // Expected: 50
    
    q.deque(); // Should trigger underflow

    return 0;
}