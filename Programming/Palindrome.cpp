#include<iostream>
using namespace std;
int main(){
    int n,reverse=0;
    cout<<"enter number";
    cin>>n;
    int c=n;
    while(n!=0){
        int remainder=n%10;
        reverse=(reverse*10)+remainder;
        n=n/10;
    }
    if(reverse==c){
    cout<<"it is a palindrome";
    }
    else{
        cout<<"it is not a palindrome";
    }
}