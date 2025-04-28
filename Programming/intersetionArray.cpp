#include<iostream>
using namespace std;//rough code.


int main(){
    int n,m;
    cout<<"enter size of array 1: ";
    cin>>n;

    int arr1[100];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"enter size of array 2: ";
    cin>>m;
    int arr2[100];
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i];
            }
        }
    }
}

