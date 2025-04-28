#include<iostream>
using namespace std;

void spiralArray(int arr[][3],int row,int col){
    int count=0;
    int total=row*col;
    int ans=0;

    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;
    int endingCol=col-1;

    while(count<total){
        for(int i=startingCol;count<total && i<=endingCol;i++){
            ans=arr[startingRow][i];
            cout<<ans;
            count++;
        }
        startingRow++;

        for(int i=startingRow;count<total && i<=endingRow;i++){
            ans=arr[i][endingCol];
            cout<<ans;
            count++;
        }
        endingCol--;

        for(int i=endingCol;count<total && i>=startingCol;i--){
            ans=arr[endingRow][i];
            cout<<ans;
            count++;
        }
        endingRow--;

        for(int i=endingRow;count<total && i>=startingRow;i--){
            ans=arr[i][startingCol];
            cout<<ans;
            count++;
        }
        startingCol++;

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
    spiralArray(arr,3,3);
}