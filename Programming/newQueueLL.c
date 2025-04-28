#include<stdio.h>
#include<stdlib.h>

struct Node* f=NULL;
struct Node* r=NULL;

struct Node{
    int data;
    struct Node* next;
};
void print(struct Node* q){
    while(q!=NULL){
        printf("%d \n",q->data);
        q=q->next;
    }
}
void enqueue(int data){
    struct Node* temp=(struct Node* )malloc(sizeof(struct Node));
    if(temp==NULL){
        printf("queue is full\n");
    }
    else{
        temp->data=data;
        temp->next=NULL;
        if(f==NULL){
            f=r=temp;
        }
        else{
            r->next=temp;
            r=temp;
        }
    }
}
int dequeue(){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    int val=-1;
    if(f==NULL){
        printf("queue is empty\n");
    }
    else{
        f=f->next;
        val=ptr->data;
        free(ptr);
    }
    return val;
}
int main(){
    

    enqueue(43);
    enqueue(32);
    enqueue(12);
    print(f);
    printf("dequeue element %d",dequeue());
    printf("dequeue element %d",dequeue());
    printf("dequeue element %d",dequeue());
    printf("dequeue element %d",dequeue());
    
}