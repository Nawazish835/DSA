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
void Head(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
Node* KreverseNode(Node* &head,int k){
    if(head==NULL){
        return NULL;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;
    int count=0;
    while(curr!=NULL && count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    if(forward!=NULL){
        head->next=KreverseNode(forward,k);
    }
    return prev;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Head(head,9);
    print(head);

    Head(head,8);
    print(head);

    Head(head,7);
    print(head);

    Head(head,6);
    print(head);

    head=KreverseNode(head,2);
    print(head);
}