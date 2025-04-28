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
    ~Node(){
        int value=this->data;
        while(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node is: "<<value<<endl;
    }
};
void insertNode(Node* &tail,int element,int data){//finding the element and putting values next to the element 
    if(tail==NULL){// if the list is empty
        Node* temp=new Node(data);
        tail=temp;
        temp->next=temp;
    }
    else{//if the list is non-empty 
        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        //if element found
        Node* temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void deleteNodevalue(Node* &tail,int value){
    if(tail==NULL){//empty case
        cout<<"list is already empty";
    }
    else{//non-empty case
        Node* prev=tail;
        Node* curr=prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        // 1 node linked list
        if(curr==prev){
            tail=NULL;
        }
        // >=2 node linked list
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}
void print(Node* tail){
    Node* temp=tail;
    if(tail==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }
    while(tail!=temp);
    cout<<endl;
}

int main(){
    Node* tail =NULL;
    //inserting at empty list
    insertNode(tail,5,10);
    print(tail);

    // insertNode(tail,10,12);
    // print(tail);

    deleteNodevalue(tail,10);
    print(tail);

}