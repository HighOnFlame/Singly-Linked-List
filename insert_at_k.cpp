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

Node* insertelement(Node *head,int ele, int k){
    if(head==NULL){
        if(k==1) return new Node(ele);
        else return NULL;
    }
    if(k==1){
        Node* temp = new Node(ele,head);
        return temp;
    }
    
    int count = 0; 
    Node* temp = head;
    while(temp != NULL){
        count++;

        if(count==k-1){
            Node* x = new Node(ele);
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
        head = insertelement(head,96,2);
        print(head);
    }