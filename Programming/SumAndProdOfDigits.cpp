#include<iostream>
using namespace std;
int main(){
    int n;
    int prod=1;
    int sum=0;
    cout<<"enter number";
    cin>>n;
    while(n!=0){
        int rem=n%10;
        prod=prod*rem;
        sum=sum+rem;
        n=n/10;
    }
    cout<<prod<<" "<<sum;
}