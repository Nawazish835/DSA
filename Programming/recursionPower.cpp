#include<iostream>
using namespace std;

int POWER(int n){
    if(n==0){
        return 1;
    }

    int power=2*POWER(n-1);

    return power;
}

int main(){
    int n;
    cin>>n;

    cout<<POWER(n)<<endl;
}