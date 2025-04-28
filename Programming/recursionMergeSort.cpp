#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void merge(int arr[],int mid,int start,int end){
    int i=start;
    int j=mid+1;
    int k=start;
    int arr1[100];

    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            arr1[k]=arr[i];
            k++;i++;
        }
        else{
            arr1[k]=arr[j];
            k++;j++;
        }
    }
    while(i<=mid){
        arr1[k]=arr[i];
        k++;i++;
    }
    while(j<=end){
        arr1[k]=arr[j];
        k++;j++;
    }
    for(int i=start;i<=end;i++){
        arr[i]=arr1[i];
    }
}
void mergeSort(int arr[],int start,int end){
    if(start<end){
        int mid=start+(end-start)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,mid,start,end);
    }
}
int main(){
    int n=6;
    int arr[]={42,4,13,141,23,1};

    mergeSort(arr,0,n-1);
    print(arr,n);
}