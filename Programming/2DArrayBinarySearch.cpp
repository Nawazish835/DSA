#include<iostream>
using namespace std;

int binarySearch(int arr[][4],int row,int col,int target){
    int start=0;
    int end=(row*col)-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        int element=arr[mid/col][mid%col];

        if(target==element){
            return mid;
        }
        else if(target>element){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[3][4];

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    int ans=binarySearch(arr,3,4,13);
    if(ans != -1){
        cout<<"target found";
    }
    else{
        cout<<"target not found";
    }
}