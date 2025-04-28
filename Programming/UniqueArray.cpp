#include<iostream>
using namespace std;

int Unique(int arr[],int n){
    int ans=0;

    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    
    int arr[7]={1,2,3,4,1,2,3};//works only for odd element.
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Unique element is: "<<Unique(arr,7);
    
}
