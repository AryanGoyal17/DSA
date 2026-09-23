#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
        int data;
        Node* next;
    
    public:
        Node(int data1, Node* next1 = nullptr){
            data = data1;
            next = next1;
        }
};

Node* convertArraytoLinkedList(vector <int> & arr){

    if(arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }

    return head;
}

int main(){

    vector <int> arr = {1, 3, 5, 6};
    Node* head = convertArraytoLinkedList(arr);

    cout << head -> data;

    //Time complexity = O(N)
    //Space complexity = o(1) [O(N) is for the linked list i create, but that cant be avoided]

    return 0;
}