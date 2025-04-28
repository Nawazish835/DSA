#include<iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;
    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    //destructor
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"memory is free node: "<<value<<endl;
    }
};
void insertAtTail(Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void insertAtHead(Node* &head,int data){
    Node* temp= new Node(data);
    temp->next=head;
    head=temp;
}
void insertAtPosition(Node* &tail,Node* &head,int position,int data){
    Node* temp=head;
    int cnt=1;
    // insert at start
    if(position==1){
        insertAtHead(head,data);
        return ;
    }
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //insert at end
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return ;
    }
    Node* NodeToInsert=new Node(data);
    NodeToInsert->next=temp->next;
    temp->next=NodeToInsert;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
} 
void deletePosition(Node* &head,int position){
    //LL is in starting
    if(position==1){
        Node* temp =head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    //LL is in middle or last
    else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    //creating a new node
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;

    print(head);
    insertAtTail(tail,11);
    print(head);
    insertAtTail(tail,12);
    print(head);

    insertAtPosition(tail,head,4,13);
    print(head);

    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;

    deletePosition(head,2);
    print(head);
}