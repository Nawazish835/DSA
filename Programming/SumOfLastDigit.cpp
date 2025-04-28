#include<iostream>
using namespace std;

int Sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int arr[5]={1,2,3,4,5};

    cout<<"last digit sum is :"<<Sum(arr+2,3)<<endl;
}