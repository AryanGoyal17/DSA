// Search for a value in Linked List or check if present (both done)

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

Node* searchElement(Node* head, int value){

    Node* temp = head;

    while(temp){
        if(temp -> data == value){
            return temp;
        }
        temp = temp -> next;
    }

    return nullptr;
}

int main(){

    vector <int> arr = {1, 5, 4, 6};
    Node* head = convertArraytoLinkedList(arr);

    int value;
    cout << "Enter the value you want to search for: ";
    cin >> value;

    Node* result = searchElement(head, value);

    if(result){
        cout << "Given value is present in the linked list" << endl;
    }
    else{
        cout << "Given value is NOT present in the linked list" << endl;
    }

    //For searching element [traversed once] --
    //Time complexity = O(N)
    //Space complexity = O(1)

    return 0;
}