#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};
void print(struct Node* ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
int isEmpty(struct Node* ptr){
    if(ptr==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct Node* ptr){
    struct Node* p=(struct Node*)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
struct Node *push(struct Node* top,int data){
    if(isFull(top)){
        printf("stack overflow\n");
        return 0;
    }
    else{ 
        struct Node* p=(struct Node*)malloc(sizeof(struct Node));
        p->data=data;
        p->next=top;
        top=p;
        return top;
    }
}
int pop(struct Node** top) {
    if (isEmpty(*top)) {
        printf("Stack underflow\n");
        return -1;
    }
    else{
        struct Node* temp = *top;
        int x = temp->data;
        *top = (*top)->next;
        free(temp);
        return x;
    }
}
int main(){
    struct Node* top=NULL;
    top=push(top,43);
    top=push(top,342);
    top=push(top,123);
    int element = pop(&top);
    printf("Element popped is %d\n", element);
    print(top);
}