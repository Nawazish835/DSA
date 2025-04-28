#include<iostream>
using namespace std;

int Power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans=Power(a,b/2); //the formula
    if(b%2==0){
        return ans*ans; //formula if power is even
    }
    else{
        return a*ans*ans; //formula if power is odd
    }
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<Power(a,b);
}