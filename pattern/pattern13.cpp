// Q.to print
// A 
// B B 
// C C C
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        char ch='A'+i-1;
        while(j<=i){
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
