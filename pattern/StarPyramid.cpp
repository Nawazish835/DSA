// Q. to print 
//    *
//   ***
//  *****
// *******
// firt we need to print the below star to make the pyramid

// *
// ***
// *****
// *******
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int nst=1;

    for(int i=1;i<=n;i++){
        int nsp=n-i;
        for(int space=1;space<=nsp;space++){
            cout<<" ";
        }
        nsp--;
        for(int j=1;j<=nst;j++){
            cout<<"*";
        }
        nst+=2;
        cout<<endl;
    }
}
