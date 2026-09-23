// First converted an array to linked list and then traversed it

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

int main(){

    vector <int> arr = {1, 5, 4, 6};
    Node* head = convertArraytoLinkedList(arr);

    Node* temp = head;

    int count = 0;

    //Traversing in LL
    while(temp){
        count++;
        temp = temp -> next;
    }    

    cout << "Length of Linked List = " << count << endl;

    //For finding length [traversed once] --
    //Time complexity = O(N)
    //Space complexity = O(1)

    return 0;
}