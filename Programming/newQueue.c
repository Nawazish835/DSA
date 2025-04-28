#include<stdio.h>
#include<stdlib.h>
struct Queue{
    int size;
    int f;
    int r;
    int *arr;
};
int isFull(struct Queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}
int isEmpty(struct Queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

int enqueue(struct Queue *q,int data){
    if(isFull(q)){
        printf("queue is full\n");
        return -1;
    }
    else{
        q->r++;
        return q->arr[q->r]=data;
    }
}
int dequeue(struct Queue *q){
    if(isEmpty(q)){
        printf("queue is empty\n");
        return -1;
    }
    else{
        q->f++;
        return q->arr[q->f];
    }
}

int main(){
    struct Queue *q=(struct Queue*)malloc(sizeof(struct Queue));
    q->size=3;
    q->f=-1;
    q->r=-1;
    q->arr=(int *)malloc(q->size*sizeof(int ));

    printf("enqueue %d \n",enqueue(q,32));
    printf("enqueue %d \n",enqueue(q,42));
    printf("dequeue %d \n",dequeue(q));

}