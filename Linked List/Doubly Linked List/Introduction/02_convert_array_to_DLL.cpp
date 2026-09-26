// Convert array to doubly-linked list

#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
        int data;
        Node* next;
        Node* back;
    
    public:
        Node(int data1, Node* next1 = nullptr, Node* back1 = nullptr){
            data = data1;
            next = next1;
            back = back1;
        }
};

Node* convertArraytoLinkedList(vector <int> & arr){

    if(arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev -> next = temp;
        prev = temp;
    }

    return head;
}

void print(Node* head){
    Node* temp = head;

    while(temp){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main(){

    vector <int> arr = {1, 3, 5, 6};
    Node* head = convertArraytoLinkedList(arr);
    print(head);

    //Time complexity = O(N)
    //Space complexity = o(1) [O(N) is for the linked list i create, but that cant be avoided]

    return 0;
}