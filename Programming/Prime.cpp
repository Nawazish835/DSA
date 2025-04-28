#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool prime = true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            prime = false;
            break;
        }
        else{
            prime = true;
        }
    }
    if(prime==true){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}
