#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    if(n<=1){
        cout<<"not prime";
        return 0;
    }
    if(isPrime(n)==true){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}