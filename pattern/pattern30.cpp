// Q. to print 
// 1
// 3 5
// 7 9 11
// 13 15 17 19
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int count=2;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count;
            count+=2;
        }
        cout<<endl;
    }
}
