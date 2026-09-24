// Insertion at tail of linked list

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

void print(Node* head){
    Node* temp = head;

    while(temp){
        cout << temp -> data << " ";
        temp = temp -> next;
    }

    cout << '\n';
}

Node* InsertatTail(Node* head, int value){

    if(head == nullptr){
        return new Node(value);
    }

    Node* newNode = new Node(value);
    Node* temp = head;

    while(temp -> next){
        temp = temp -> next;
    }

    temp -> next = newNode;

    return head;
}

int main(){

    vector <int> arr = {1, 5, 4, 6};
    Node* head = convertArraytoLinkedList(arr);

    //Before insertion
    print(head);

    int value;
    cout << "Enter the value you want to insert: ";
    cin >> value;

    Node* newHead = InsertatTail(head, value);

    //After insertion 
    print(newHead);

    // For insertion at tail of linked list
    //Time complexity = O(N)
    //Space complexity = O(1)

    return 0;
}