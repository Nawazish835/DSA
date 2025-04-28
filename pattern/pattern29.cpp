// Q.to print
// 1
// AB
// 123
// ABCD
// 12345
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        if(i%2!=0){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        }   
        else{
            char ch='A';
            for(int j=1;j<=i;j++){
            cout<<ch;
            ch++;
        }
        }
        cout<<endl;
    }
}