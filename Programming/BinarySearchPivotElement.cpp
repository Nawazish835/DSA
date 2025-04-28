#include<iostream>
using namespace std;

int Pivot(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return end;
}

int main(){
    int arr[7]={4,5,6,7,0,1,2};  // pivot array means sorted and rotated array like this.
 
    int PivotElement=Pivot(arr,7);
    cout<<"Pivot element is on index: "<<PivotElement;
}