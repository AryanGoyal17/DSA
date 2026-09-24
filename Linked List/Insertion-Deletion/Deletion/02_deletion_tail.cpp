// Delete tail of a linked list

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

Node* DeleteTail(Node* head){
    if(head == nullptr || head -> next == nullptr){
        delete head;
        return nullptr;
    }

    Node* temp = head;

    while(temp -> next -> next != nullptr){
        temp = temp -> next;
    }

    delete temp -> next;

    temp -> next = nullptr;

    return head;
}

int main(){

    vector <int> arr = {1, 5, 4, 6};
    Node* head = convertArraytoLinkedList(arr);

    //Before deletion
    print(head);

    Node* newHead = DeleteTail(head);

    //After deletion 
    print(newHead);

    // For deleting tail
    //Time complexity = O(N)
    //Space complexity = O(1)

    return 0;
}