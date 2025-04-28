#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* reverseNode(Node* &head){
    if(head==NULL || head->next==NULL){//base case
        return head;
    }
    // recursive code

    // Node* chotahead=reverseNode(head->next);
    // head->next->next=head;
    // head->next=NULL;

    // return chotahead;
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;
    
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;

}
int main(){
    Node* temp=new Node(10);
    Node* head=temp;
    print(head);

    insertAtHead(head,13);
    print(head);

    insertAtHead(head,19);
    print(head);

    head=reverseNode(head);
    print(head);
}