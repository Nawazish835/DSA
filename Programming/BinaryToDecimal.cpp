#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,ans=0;
    cout<<"enter number";
    cin>>n;
    int i=0;
    while(n!=0){
        int digits=n%10;
        if(digits==1){
        ans=ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<ans;

}