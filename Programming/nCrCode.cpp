#include<iostream>
using namespace std;

double factorial(int n){
    double factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
double nCr(int n,int r){
    double num=factorial(n);
    double deno=factorial(r)*factorial(n-r);
    double ans=num/deno;
    return ans;
}


int main(){
   int n,r;
   cout<<"enter n and r";
   cin>>n>>r;

   cout<<nCr(n,r)<<endl;;
}

