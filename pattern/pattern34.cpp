#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;

    int nsp=1;
    int nst=n;
    
    for(int a=1;a<=2*n+1;a++){ // different loop to print first line star
        cout<<char('A'+a-1);
    }
    cout<<endl;
    
    for(int i=1;i<=n;i++){
        char a='A';
        for(int k=1;k<=nst;k++){
            cout<<a;
            a++;
        }
        for(int j=1;j<=nsp;j++){
            cout<<" ";
            a++;
        }
        for(int k=1;k<=nst;k++){
            cout<<a;
            a++;
        }
        nsp+=2;
        nst--;

        cout<<endl;
    }
}