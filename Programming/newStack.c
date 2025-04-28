#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack * ptr){
    if (ptr->top==-1){
        return 1;
    }
    return 0;
}
int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    return 0;
}
void push(struct stack* ptr,int value){
    if(isFull(ptr)){
        printf("stack overflow at %d \n",value);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
int pop(struct stack* ptr){
    
    if(isEmpty(ptr)){
        printf("stack underflow at \n");
        return -1;
    }
    else{
        int value=ptr->arr[ptr->top];
        ptr->top--;
        return value;
    }
}
int peek(struct stack* ptr,int i){
    if(ptr->top-i+1 <0){
        printf("incorrect position");
        return -1;
    }
    else{
        return ptr->arr[ptr->top-i+1];
    }
}
int Top(struct stack *ptr){
    return ptr->arr[ptr->top];
}
int bottom(struct stack *ptr){
    return ptr->arr[0];
}

int main(){
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size=5;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));

    push(s,10);
    push(s,54);
    push(s,32);
    push(s,123);
    push(s,132);
    // pop(s);

    // printf("poped %d from the stack \n",pop(s));

    // if(isEmpty(s)){
    //         printf("the stack is empty \n");
    //     }
    //     else{
    //         printf("the stack is not empty \n");
    //     }
    // if(isFull(s)){
    //         printf("the stack is full \n");
    //     }
    //     else{
    //         printf("the stack is not full \n");
    //     }
    // return 0;

    for(int i=1;i<=s->top+1;i++){
        printf("position of %d is at %d\n",i,peek(s,i));
    }
    printf("%d \n",Top(s));
    printf("%d \n",bottom(s));

}