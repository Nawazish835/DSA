#include<stdio.h>

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int insertion(int arr[],int n,int index,int element){
    for(int i=n-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
void delete(int arr[],int n,int index){
    for(int i=index;i<n-1;i++){
        arr[i]=arr[i+1];
    }
}

int main(){
    int arr[100]={1,2,3,4,5};
    int n=5,index= 3;
    print(arr,n);

    insertion(arr,n,index,6);
    n=n+1;
    print(arr,n);
    
    // delete(arr,n,index);
    // n=n-1;
    // print(arr,n);
    
}