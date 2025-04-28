#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int element){
    int start=0;
    int end=n-1;

    int mid=start+(end-start)/2;

    while(start<=end){
        if(element==arr[mid]){
            return mid;
        }
        if(element>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){
    int arr[11]={7,13,8,9,10,1,2,3,4,5,6};

    sort(arr,arr+11);

    cout<<BinarySearch(arr,11,13);

    if(BinarySearch(arr,11,13)!=-1){
        cout<<"it is present";
    }
    else{
        cout<<"it is not present";
    }
    
}