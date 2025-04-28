#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=5;
    int arr[100];
    cout<<"enter size: ";
    cin>>n;

    for(int k=0;k<n;k++){
        cin>>arr[k];
    }

    //rough code.


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==sum){
                cout<<i<<" "<<j;
            }
        }
       
    }
}