// Q.to print 
// D 
// C D 
// B C D 
// A B C D 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch='A'+n-i;
        while(j<=i){
            cout<<ch<<" ";
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }
}