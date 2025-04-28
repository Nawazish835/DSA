//  Q.to print  
//    1
//   123
//  12345
// 1234567
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int nst=1;
    int nsp=3;

    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp--;
        for(int j=1;j<=nst;j++){
            cout<<j;
        }
        nst+=2;
        cout<<endl;
    }
}