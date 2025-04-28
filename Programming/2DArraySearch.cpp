#include<iostream>
using namespace std;

bool isFound(int arr[][3],int element,int row,int col){

    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            if(arr[row][col]==element){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][3];

    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }

    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    int element;
    cout<<"enter element to search: ";
    cin>>element;

    if(isFound(arr,element,3,3)){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
}