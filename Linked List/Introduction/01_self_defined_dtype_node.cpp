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

int main(){
    vector <int> arr = {1, 3, 5, 6};
    Node* y = new Node(6, nullptr);
    Node* z = new Node(5);

    cout << y << '\n' << z << '\n' <<  y -> data << '\n' << y -> next << '\n' << z -> data << '\n' << z -> next << endl;
    return 0;
}