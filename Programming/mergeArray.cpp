#include<iostream>
using namespace std;

void Merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr1[4]={1,5,7,8};
    int arr2[3]={3,8,9};
    int arr3[7]={0};

    Merge(arr1,4,arr2,3,arr3);
    PrintArray(arr3,7);
    
}