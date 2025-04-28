#include<iostream>
using namespace std;

void RotateArray(int arr[],int n,int k){

    int temp[n];
    // rotate the array.
    for(int i=0;i<n;i++){ 
        temp[(k+i)%n]=arr[i];
    }
    // copy the array.
    for(int j=0;j<n;j++){ 
        arr[j]=temp[j];
    }
}

int main(){
    int n=5;
    int arr[5]={1,0,5,0,3};
    int k=2;
    
    RotateArray(arr,n,k);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}