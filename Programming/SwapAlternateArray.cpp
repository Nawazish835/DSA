#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void SwapArray(int arr[],int n){
    
    for(int i=0;i<=n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int n;
    int arr[5]={1,2,3,7,4};

    SwapArray(arr,5);
    PrintArray(arr,5);

}

// #include<iostream>
// using namespace std;

// void PrintArray(int arr[],int size){

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void swapAlternate(int arr[],int size){
//     for(int i=0;i<size;i+=2){
//         if(i+1<size){
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }

// int main(){

//     int arr[100];

//     int n;

//     cout<<"enter number";
//     cin>>n;

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     swapAlternate(arr,n);

//     PrintArray(arr,n);
// }