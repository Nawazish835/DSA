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
int isBST(struct Node* root){ // to check is the tree is in ascending order or not
    static struct Node* prev=NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data<=prev->data){
            return 0;
        }
        prev=root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}
struct Node* searchBST(struct Node* root,int element){// recursive way
    if(root==NULL){
        return NULL;
    }
    if(element==root->data){
        return root;
    }
    else if(element<root->data){
        return searchBST(root->left,element);
    }
    else{
        return searchBST(root->right,element);
    }
}
struct Node* searchBSTiter(struct Node* root,int element){
    while(root!=NULL){
        if(element==root->data){
            return root;
        }
        else if(element<root->data){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return NULL;
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
    // printf("%d ",isBST(p));

    if(searchBSTiter(p,2)){
        printf("element found");
    }
    else{
        printf("element not found");
    }

}