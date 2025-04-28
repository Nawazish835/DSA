#include<iostream>
using namespace std;

//largest row sum.
int LargestRowSum(int arr[][3],int row,int col){
    int maxi=INT_MIN;
    int rowIndex=0;

    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=row;
        }
    }
    cout<<"maximum sum is: "<<maxi<<endl;
    return rowIndex;
}

//row wise sum.
void PrintRowSum(int arr[][3],int row,int col){
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
//col wise sum.
void PrintColSum(int arr[][3],int row,int col){
    for(int col=0;col<3;col++){
        int sum=0;
        for(int row=0;row<3;row++){
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
//all sum.
void PrintAllSum(int arr[][3],int row,int col){
    int sum=0;
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }
        
    }
    cout<<sum<<" "<<endl;
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

    PrintRowSum(arr,3,3);
    PrintColSum(arr,3,3);
    PrintAllSum(arr,3,3);
    int ans=LargestRowSum(arr,3,3);
    cout<<"Index is: "<<ans<<endl;
}
