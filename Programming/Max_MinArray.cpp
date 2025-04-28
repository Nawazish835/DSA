#include<iostream>
using namespace std;

int Max(int num[],int size){
    int maxi=INT_MIN;
    for(int i=0;i<=size;i++){

        maxi=max(num[i],maxi);   //maximum inbuilt function.
        //or
        // if(num[i]>max){
        //     max=num[i];
        // }
    }
    return maxi;

}
int Min(int num[],int size){
    int mini=INT_MAX;
    for(int i=0;i<=size;i++){

        mini=min(mini,num[i]);   //minimum inbuilt function.
        //or
        // if(num[i]<min){
        //     min=num[i];
        // }
    }
    return mini;

}
int main(){
    int n;
    cout<<"enter maximum and minimum number: ";
    cin>>n;

    int num[100];

    for(int i=0;i<=n;i++){
        cin>>num[i];
    }
    cout<<"maximum is: "<<Max(num,n)<<endl;
    cout<<"minimum is: "<<Min(num,n)<<endl;
}