
#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

void Duplicate(int arr[],int &n){

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                while(j<n){
                    arr[j]=arr[j+1];
                    j++;
                }
                --n;
            }
            else{
                continue;
            }
        }
    }
}

int main(){
    int n=6;
    int arr[6]={2,1,4,1,1,5};

    Duplicate(arr,n);
    PrintArray(arr,n);
}