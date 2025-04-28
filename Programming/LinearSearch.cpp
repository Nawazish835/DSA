#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return 1;
        }
    }
    return 0;
}
int main(){
    int element;
    int arr[5]={4,2,2,4,63};
    cout<<"enter element: ";
    cin>>element;

    int found=linearSearch(arr,5,element);
    if(found==true){
        cout<<"it is present";
    }
    else{
        cout<<"it is not present";
    }
}