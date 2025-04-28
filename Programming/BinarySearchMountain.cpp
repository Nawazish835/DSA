#include<iostream>
using namespace std;

int MountainPeak(int arr[],int n){
    int start=0;
    int end=n-1;

    int mid = start+(end-start)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid = start+(end-start)/2;
    }
    return start;
}

int main(){

    int arr[6]={2,3,4,5,1,1};

    int s=MountainPeak(arr,6);

    cout<<"Highest Mountain Peak in this array is: "<<s<<endl;
}