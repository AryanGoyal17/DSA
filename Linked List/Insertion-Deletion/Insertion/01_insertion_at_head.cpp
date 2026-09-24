// Insertion at head of linked list

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

Node* InsertatHead(Node* head, int value){

    Node* temp = new Node(value, head);
    return temp;
}

int main(){

    vector <int> arr = {1, 5, 4, 6};
    Node* head = convertArraytoLinkedList(arr);

    //Before insertion
    print(head);

    int value;
    cout << "Enter the value you want to insert: ";
    cin >> value;

    Node* newHead = InsertatHead(head, value);

    //After insertion 
    print(newHead);

    // For insertion at head of linked list
    //Time complexity = O(1)
    //Space complexity = O(1)

    return 0;
}