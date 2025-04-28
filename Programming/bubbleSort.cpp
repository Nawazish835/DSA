#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=5;
    int arr[5]={3,5,2,7,9};

    for(int i=1;i<n;i++){ //int i=1 indicates round 1 and goes on.
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
    PrintArray(arr,5);
}