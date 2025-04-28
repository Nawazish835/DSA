#include<iostream>
using namespace std;

// using for loop
// bool isSorted(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             return 0;
//         }
//     }
//     return 1;
// }

bool isSorted(int arr[],int n){
    if(n==0 || n==1){
        return 1;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    else{
        bool ans=isSorted(arr+1,n-1);
        return ans;
    }
}

int main(){
    int n=5;
    int arr[5]={1,2,3,7,9};

    int ans=isSorted(arr,n);
    if(ans){
        cout<<"array is sorted ";
    }
    else{
        cout<<"array is not sorted ";
    }
}