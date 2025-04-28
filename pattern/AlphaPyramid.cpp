// Q.to print
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int nst=1;
    for(int i=1;i<=n;i++){
        char a='A'+i-2;
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        for(int j=1;j<=i;j++){
            cout<<char('A'+j-1);
        }
        nst+=2;
        for(int k=1;k<=i-1;k++){
            cout<<a;
            a--;
        }
        cout<<endl;
    }
}
