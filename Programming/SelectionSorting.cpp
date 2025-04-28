#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int k=0;k<n;k++){
    cout<<arr[k]<<" ";
    }
}

int main(){
    int n=4;
    int arr[4]={5,2,3,1};

    for(int i=0;i<n-1;i++){
        int miniIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[miniIndex]){
                miniIndex=j;
            }
        }
        swap(arr[miniIndex],arr[i]);
    }
    printArray(arr,n);
}

// void reverse(int arr[],int n){
//     int start=0;
//     int end=n-1;

//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// int main(){
    
//     int n;
//     cout<<"enter size of an array: ";
//     cin>>n;
//     int arr[100];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int j=0;j<n;j++){
//         sort(arr,arr+n);
//         cout<<arr[j];
//     }   
//     cout<<endl;
    
//     reverse(arr,n);
//     for(int k=0;k<n;k++){
//         cout<<arr[k];
//     }
// }
    
    