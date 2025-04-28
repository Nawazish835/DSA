#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"enter size of an array: ";
    cin>>n;
    int arr[100];

    for(int k=0;k<n;k++){
        cin>>arr[k];
    }
    //round 1
    for(int i=1;i<n;i++){ //like card sorting
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        } 
        arr[j+1]=temp;
    }
    PrintArray(arr,n);
}
