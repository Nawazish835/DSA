#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start=0;
    int end=n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void PrintArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    int arr[5]={1,2,3,6,4};

    reverse(arr,5);
    PrintArray(arr,5);

}



//#include<iostream>
// using namespace std;

// void reverse(int arr[],int n){
//     int start=0;
//     int end=n-1;

//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }
// int main(){
    
//     int n,arr[100];
//     cout<<"enter number: ";
//     cin>>n;



//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     // int arr[5]={1,2,3,4,5};

//     reverse(arr,n);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
// }