#include<iostream>
using namespace std;

void WavePrint(int arr[][3],int n,int m){
    for(int col=0;col<m;col++){
        if(col%2==0){
            for(int row=0;row<n;row++){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            for(int row=n-1;row>=0;row--){
                cout<<arr[row][col]<<" ";
            }
        }
    }
}

int main(){
    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    WavePrint(arr,3,3);
}