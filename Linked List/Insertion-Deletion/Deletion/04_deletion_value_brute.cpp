// Deletion by value in a linked list -- Brute (Search + delete kth node)

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

int SearchVal(Node* head, int val){

    int node_num = 0;

    Node* temp = head;

    while(temp){
        node_num++;
        if(temp -> data == val){
            return node_num;
        }
        temp = temp -> next;
    }

    return -1;
}

Node* DeleteValue(Node* head, int val){

    if(head == nullptr){
        return head;
    }

    int k = SearchVal(head, val);
    if (k == -1) return head;

    if(k == 1){
        Node* temp = head;
        head = head -> next;
        delete temp;
        return head;
    }

    int count = 0; 
    Node* temp = head;
    Node* prev = nullptr;

    while(temp){
        count++;

        if(count == k){
            prev -> next = prev -> next -> next;
            delete temp;
            break;
        }

        prev = temp;
        temp = temp -> next;
    }

    return head;
}

int main(){

    vector <int> arr = {1, 5, 4, 6};
    Node* head = convertArraytoLinkedList(arr);

    //Before deletion
    print(head);

    int val;
    cout << "Enter the value you want to delete: ";
    cin >> val;

    Node* newHead = DeleteValue(head, val);

    //After deletion 
    print(newHead);

    // For deleting by value
    //Time complexity = O(2N)
    //Space complexity = O(1)

    return 0;
}