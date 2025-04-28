#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};
void print(struct Node* temp){
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
struct Node* insertAtHead(struct Node* head,int data){
    struct Node* temp=(struct Node* )malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=head;
    head->prev=NULL;
    head=temp;
    return head;
}
struct Node* insertAtEnd(struct Node* head,int data){
    struct Node* temp=(struct Node* )malloc(sizeof(struct Node));
    struct Node* p=head->next;
    temp->data=data;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=temp;
    temp->next=NULL;
    temp->prev=p;
    return head;
}
struct Node* insertAtPosition(struct Node* head,int data,int position){
    struct Node* temp=(struct Node* )malloc(sizeof(struct Node));
    struct Node* p=head;
    temp->data=data;
    for(int i=1;i<position-1;i++){
        p=p->next;
    }
    temp->next=p->next;
    p->next->prev=temp;
    temp->prev=p;
    p->next=temp;
    return head;
}
int main(){
    struct Node* head=(struct Node* )malloc(sizeof(struct Node));
    struct Node* second=(struct Node* )malloc(sizeof(struct Node));
    struct Node* third=(struct Node* )malloc(sizeof(struct Node));

    head->data=5;
    head->prev=NULL;
    head->next=second;

    second->data=10;
    head->prev=head;
    second->next=third;

    third->data=15;
    head->prev=second;
    third->next=NULL;

    print(head);

    head=insertAtHead(head,1);
    print(head);

    insertAtEnd(head,25);
    print(head);
    
    insertAtPosition(head,42,3);
    print(head);
}