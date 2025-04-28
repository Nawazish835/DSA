#include<iostream>
using namespace std;

bool binarySearch(int arr[],int start,int end,int element){
    if(start>end){
        return 0;
    }
    int mid=start+(end-start)/2;

    if(arr[mid]==element){
        return 1;
    }

    if(element>arr[mid]){
        return binarySearch(arr,mid+1,end,element);
    }
    else{
        return binarySearch(arr,start,mid-1,element);
    }
}

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int element=2;
    int ans=binarySearch(arr,0,4,element);

    if(ans){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}