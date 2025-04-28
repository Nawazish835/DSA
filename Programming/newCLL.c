#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
void print(struct Node* head){
    struct Node* temp=head;
    do{
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=head);
    printf("\n");
}
struct Node* insertAtHead(struct Node* head,int data){
    struct Node* temp=(struct Node* )malloc(sizeof(struct Node));
    struct Node* ptr=head->next;
    temp->data=data;
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->next=head;
    head=temp;
    return head;
}
struct Node* insertAtEnd(struct Node* head,int data){
    struct Node* temp=(struct Node* )malloc(sizeof(struct Node));
    struct Node* ptr=head->next;
    temp->data=data;
    while(ptr->next!=head){
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp->next=head;
    head=temp;
    return head;
}
struct Node* insertAtPosition(struct Node* head,int data,int position){
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    struct Node* ptr=head;
    temp->data=data;
    for(int i=1;i<position-1;i++){
        ptr=ptr->next;
    }
    temp->next=ptr->next;
    ptr->next=temp;
    return head;
}
int main(){
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));

    head->data=5;
    head->next=second;

    second->data=10;
    second->next=third;

    third->data=15;
    third->next=head;
    print(head);

    head=insertAtHead(head,20);
    print(head);

    insertAtEnd(head,1);
    print(head);

    insertAtPosition(head,32,2);
    print(head);
}