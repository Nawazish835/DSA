//Q. to print star 
// * * * *    
// * * * * 
// * * * * 
// * * * * 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows and columns: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<" * ";
            j++; 
        }
        cout<<endl;
        i++;
    }
   
}