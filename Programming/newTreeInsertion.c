#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* node(int data){
    struct Node* n=(struct Node* )malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}
void insert(struct Node* root,int element){
    struct Node* prev=NULL;
    while(root!=NULL){
        prev=root;
        if(element==root->data){
            printf("cannot insert");
            return ;
        }
        else if(element<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    struct Node* new=node(element);
    if(element<prev->data){
        prev->left=new;
    }
    else{
        prev->right=new;
    }

}
int main(){
    struct Node* p=node(5);
    struct Node* p1=node(3);
    struct Node* p2=node(6);
    struct Node* p3=node(1);
    struct Node* p4=node(4);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    insert(p,1);
    //printf("%d ",p->right->right->data); 
}