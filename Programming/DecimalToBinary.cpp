#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,ans=0;
    cout<<"enter number";
    cin>>n;
    int i=0;
    while(n!=0){
        int bits=n&1;
        ans=(bits*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;
}