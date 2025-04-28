#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
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
    head=temp;
    return head;
}
struct Node* insertAtEnd(struct Node* head,int data){
    struct Node* temp=(struct Node* )malloc(sizeof(struct Node));
    struct Node* ptr=head;
    temp->data=data;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->next=NULL;
    return head;
}
struct Node* insertAtPosition(struct Node* head,int data,int position){
    struct Node* NodeToInsert=(struct Node* )malloc(sizeof(struct Node));
    NodeToInsert->data=data;
    struct Node* temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->next;
        count++;
    }
    NodeToInsert->next=temp->next;
    temp->next=NodeToInsert;
    return head;
}
struct Node* deleteHead(struct Node* head){
    struct Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}
struct Node* deleteAtEnd(struct Node* head){
    struct Node*p=head;
    struct Node* q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    
    free(q);
    return head;
}
struct Node* deleteAtIndex(struct Node* head,int index){
    struct Node* p=head;
    struct Node* q=head->next;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
int main(){
    struct Node* head=(struct Node* )malloc(sizeof(struct Node));
    struct Node* second=(struct Node* )malloc(sizeof(struct Node));
    struct Node* third=(struct Node* )malloc(sizeof(struct Node));

    head->data=5;
    head->next=second;

    second->data=10;
    second->next=third;

    third->data=15;
    third->next=NULL;

    print(head);

    head=insertAtHead(head,1);
    print(head);

    insertAtEnd(head,20);
    print(head);

    insertAtPosition(head,43,2);
    print(head);

    // head=deleteHead(head);
    // print(head);
    // deleteAtIndex(head,2);
    // print(head);
    deleteAtEnd(head);
    print(head);
}