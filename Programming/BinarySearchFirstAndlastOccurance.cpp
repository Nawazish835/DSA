#include<iostream>
using namespace std;

int firstOccurance(int arr[],int n,int element){
    int start=0;
    int end=n-1;
    int ans=0;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==element){
            ans=mid;
            end=mid-1;
        }
        if(element>arr[mid]){
            start=mid+1;
        }
        else if(element<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastOccurance(int arr[],int n,int element){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==element){
            ans=mid;
            start=mid+1;
        }
        if(element>arr[mid]){
            start=mid+1;
        }
        else if(element<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){

    int arr[12]={1,2,2,2,2,3,3,3,3,3,3,5};

    cout<<"index of first occurance is: "<<firstOccurance(arr,12,3)<<endl; 
    cout<<"index of last occurance is: "<<lastOccurance(arr,12,3)<<endl; 
}