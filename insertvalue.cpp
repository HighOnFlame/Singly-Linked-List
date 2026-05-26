#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node* next;

    Node(int data1, Node* next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

void print(Node* head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* insertbeforevalue(Node *head,int ele, int val){
    if(head==NULL){
        return NULL;
    }
    if(head->data==val){
       return new Node(ele,head);   
    } 
    
    Node* temp = head;
    while(temp->next != NULL){
        if(temp->next->data == val){
            Node* x = new Node(ele,temp->next);
            x->next=temp->next;
            temp->next=x;
            break; 
        }
    temp=temp->next;
    }
    return head;

}

    int main()
    {
        vector<int> arr = {3, 5, 6, 67, 657, 88, 69, 87};
        Node* head = convertArr2LL(arr);
        head = insertbeforevalue(head,96,657);
        print(head);
    }