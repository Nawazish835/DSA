#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    int arr[100];
    cout<<"enter number of arrays: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"sum of array is: "<<sum;
}



// #include<iostream>
// using namespace std;

// int SumOfArrays(int arr[],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     return sum;
// }

// int main(){
//     int n;
//     cout<<"enter size of the array";
//     cin>>n;

//     int arr[5];

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int sum=SumOfArrays(arr,n);
//     cout<<"sum of arrys is: "<<sum;
// }