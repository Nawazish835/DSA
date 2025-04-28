#include<iostream>
using namespace std;

bool CheckIf(int arr[],int n){
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;

    }
    return count==1; //for leetcode it is return count<=1;
}

int main(){
    int n=5;
    int arr[5]={2,4,6,1,2};

    bool array=CheckIf(arr,n);

    if(array==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}