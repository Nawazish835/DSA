#include<iostream>
using namespace std;

void Sort(int arr[],int n){
    if(n==0 || n==1){
        return ;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    Sort(arr,n-1); 
}

int main(){
    int n=5;
    int arr[5]={4,7,2,9,1};
    Sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}