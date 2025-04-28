#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter number";
    cin>>n;
    int i=1;
    while(i<=n){
        if(i%2==0){
            sum+=i;
        }
        i++;
    }
    cout<<"sum of even numbers are: "<<sum<<endl;
}