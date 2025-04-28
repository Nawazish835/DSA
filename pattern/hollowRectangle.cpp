// Q. to print
// *****
// *   *
// *   *
// *****
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter number of rows"<<endl;
    cin>>n;
    cout<<"enter number of cloumns"<<endl;
    cin>>m;
     
     for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==n or i==1 or j==m or j==1){
                cout<<"*";
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
     }
}