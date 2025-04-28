#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"enter number";
    cin>>n;
    if(n==0){
        cout<<"1";
    }
    else{
        while(n!=0){
            n=n/10;
            count++;
        }
        cout<<count;
    }
}
