// Insertion before a value in a linked list

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

Node* InsertBeforeValue(Node* head, int value, int val_before){

    if(head == NULL){
        return NULL;
    }

    if(head -> data == val_before){ 
        return new Node(value, head);
    }   

    Node* temp = head;

    while(temp -> next != NULL){

        if(temp -> next -> data == val_before){
            Node* x = new Node(value);
            x -> next = temp -> next;
            temp -> next = x;
            break;
        }

        temp = temp -> next;
    }

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

    int val_before;
    cout << "Enter the value before which you want to insert: ";
    cin >> val_before;

    Node* newHead = InsertBeforeValue(head, value, val_before);

    //After insertion 
    print(newHead);

    // For insertion before a value
    //Time complexity = O(N)
    //Space complexity = O(1)

    return 0;
}