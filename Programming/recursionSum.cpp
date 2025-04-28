#include<iostream>
using namespace std;

int isSum(int arr[],int n){
    if(n<=0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int remaining=isSum(arr+1,n-1);
    int ans=arr[0]+remaining; 
    return ans;
}

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};

    int ans=isSum(arr,5);
    cout<<"Sum is: "<<ans;
}