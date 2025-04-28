#include<iostream>
using namespace std;

int main(){
    int arr[10]={0,0,2,2,1,0,1,1,0,2};

    for(int i=0;i<10;i++){
        sort(arr,arr+10);
        cout<<arr[i]<<" ";
    }
}