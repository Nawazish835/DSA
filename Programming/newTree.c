#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
void preOrder(struct Node* root){
    if(root!=NULL){
        printf("%d ",root->data);
        preOrder (root->left);
        preOrder (root->right);
    }
}
void postOrder(struct Node* root){
    if(root!=NULL){
        postOrder (root->left);
        postOrder (root->right);
        printf("%d ",root->data);
    }
}
void inOrder(struct Node* root){
    if(root!=NULL){
        inOrder (root->left);
        printf("%d ",root->data);
        inOrder (root->right);
    }
}
struct Node* node(int data){
    struct Node* n=(struct Node* )malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
int main(){
    struct Node* p=node(7);
    struct Node* p1=node(2);
    struct Node* p2=node(1);
    struct Node* p3=node(0);
    struct Node* p4=node(4);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    preOrder(p);
    printf("\n");
    postOrder(p);
    printf("\n");
    inOrder(p);
}