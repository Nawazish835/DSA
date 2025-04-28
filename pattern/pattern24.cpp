// Q. to print 
// 1234
//  234
//   34
//    4
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int i=1;
    while(i<=n){
        int count=i;
        int space=i-1;
        while(space){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=n-i+1){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}