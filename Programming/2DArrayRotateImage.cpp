#include<iostream>
using namespace std;

void rotateImage(int arr[][3],int row,int col){
    //transposing the matrix
    for(int i=0;i<row;i++){
        for(int j=i+1;j<col;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    //reversing the rows 
    for(int i=0;i<row;i++){
        for(int j=0,k=col-1;j<k;j++,k--){
            swap(arr[i][j],arr[i][k]);
        }
    }
    //printing the matrix
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
     int arr[3][3];
    cout<<"enter array: ";

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
    
    rotateImage(arr,3,3);
}