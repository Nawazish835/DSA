#include<iostream>
using namespace std;

void moveZero(int arr[],int n){
    int nonZero=0;
    for(int j=0;j<n;j++){
        if(arr[j] != 0){
            swap(arr[j],arr[nonZero]);
            nonZero++;
        }
    }
}

int main(){
    int n=5;
    int arr[5]={1,0,5,0,3};

    moveZero(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}