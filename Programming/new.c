#include<stdio.h>
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
} 
int partition(int arr[],int start,int end){
    int pivot=arr[start];
    int count=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex=start+count;
    swap(&arr[pivotIndex],&arr[start]);

    int i=start;int j=end;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(&arr[i],&arr[j]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[],int start,int end){
    if(start<end){
        int p=partition(arr,start,end);
        quickSort(arr,start,p-1);
        quickSort(arr,p+1,end);
    }
}
int main(){
    int n=6;
    int arr[]={42,4,13,141,23,1};

    quickSort(arr,0,n-1);
    print(arr,n);
}