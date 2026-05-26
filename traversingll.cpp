#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1; 
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
Node* TraverseinLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node*temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

int main() {
    vector<int> arr={3,5,6,4,657};
    Node* head = TraverseinLL(arr);
    Node* temp = head; 
    while (temp != nullptr) {
        cout << temp->data << "-> "; 
        temp = temp->next;
    }
}
