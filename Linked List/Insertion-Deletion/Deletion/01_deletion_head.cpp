// Delete head of a linked list

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

Node* DeleteHead(Node* head){

    // Here temp is required to delete the node [Temp helps avoid memory leak]

    if(head == nullptr){
        return head;
    }

    Node* temp = head;
    head = head -> next;
    delete temp;
    return head;
}

int main(){

    vector <int> arr = {1, 5, 4, 6};
    Node* head = convertArraytoLinkedList(arr);

    Node* temp = head;

    //Before deletion
    while(temp){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

    Node* newHead = DeleteHead(head);
    temp = newHead;

    //After deletion 
    while(temp){
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    // For deleting head
    //Time complexity = O(1)
    //Space complexity = O(1)

    return 0;
}