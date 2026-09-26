// Representation of doubly linked list in c++

#include <bits/stdc++.h>
using namespace std;

class Node {

    public:
        int data;
        Node* next;
        Node* prev; //added (extra from sll implementation)

    public:
        Node(int data1, Node* next1 = nullptr, Node* prev1 = nullptr){ //prev1(added extra from sll implementation) added
            data = data1;
            next = next1;
            prev = prev1;
        }
};

int main(){
    vector <int> arr = {1, 3, 5, 6};
    Node* y = new Node(6, nullptr, nullptr);
    Node* z = new Node(5);

    cout << y << '\n' << z << '\n' <<  y -> data << '\n' << y -> next << '\n' << y -> prev << '\n' << z -> data << '\n' << z -> next << '\n' << z -> prev << endl;
    return 0;
}