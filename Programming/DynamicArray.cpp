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
    // int n;
    // cin>>n;
    // int *arr=new int [n];
    // // delete []arr;   function to delete the memory of an array.
    // // delete i;       function to delete the memory of a single element.
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // cout<<"sum is: "<<Sum(arr,5);

    int n,m;
    cin>>n;
    cin>>m;
    //creating size of double array
    int **arr=new int *[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[m];
    }
    //taking input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    //printing the output
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //deleting the memory
    for(int i=0;i<n;i++){
        delete []arr[i];
    }
    delete []arr;
}