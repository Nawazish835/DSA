#include<iostream>
using namespace std;

bool Search(int arr[],int n,int element){
    if(n==0){
        return 0;
    }
    if(arr[0]==element){
        return 1;
    }
    int ans=Search(arr+1,n-1,element);
    return ans;
}

int main(){
    int n=5;
    int arr[5]={1,2,3,5,6};
    int element=2;

    int ans=Search(arr,n,element);
    if(ans){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}