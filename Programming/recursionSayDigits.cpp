#include<iostream>
using namespace std;

void sayDigits(string arr[],int n){
    if(n==0){
        return ;
    }

    int digits=n%10;
    n=n/10;

    sayDigits(arr,n);
    cout<<arr[digits]<<" ";
}

int main(){
    int n;
    cin>>n;

    string arr[10]={"zero","one","two","three","four",
                    "five","six","seven","eight","nine"};

    sayDigits(arr,n);
    cout<<endl;
}