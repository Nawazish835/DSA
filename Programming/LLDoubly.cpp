#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* pre;
    Node* next;
    Node(int data){
        this->data=data;
        this->pre=NULL;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        while(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memeory is free for node is: "<<value<<endl;
    }
};
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int getLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head->pre=temp;
    head=temp;
}
void insertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    temp->pre=tail;
    tail=temp;
}
void insertAtPosition(Node* &tail,Node* &head,int position,int data){
    Node* temp=head;
    int cnt=1;
    if(position==1){
        insertAtHead(head,data);
        return ;
    }
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return ;
    }
    Node* NodeToInsert=new Node(data);
    NodeToInsert->next=temp->next;
    temp->next->pre=NodeToInsert;
    temp->next=NodeToInsert;
    NodeToInsert->pre=temp;
}
void deletePosition(Node* head,int position){
    if(position==1){
        Node* temp=head;
        temp->next->pre=NULL;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        int cnt=1;
        Node* curr=head;
        Node* pre=NULL;
        while(cnt<position){
            pre=curr;
            curr=curr->next;
            cnt++;
        }
        curr->pre=NULL;
        pre->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    
    print(head);
    cout<<getLength(head)<<endl;//length

    insertAtHead(head,11);
    print(head);

    insertAtTail(tail,13);
    print(head);

    insertAtPosition(tail,head,4,14);
    print(head);

    deletePosition(head,3);
    print(head);

    cout<<getLength(head)<<endl;//length
}