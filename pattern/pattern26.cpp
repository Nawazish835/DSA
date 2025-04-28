// Q.to print 
//     1
//    121
//   12321
//  1234321
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number";
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int space=n-i;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j=1;
//         while(j<=i){
//             cout<<j;
//             j++;
//         }
//         int start=i-1;
//         while(start){
//             cout<<start;
//             start--;
//         }
//         cout<<endl;
//         i++;
//     }
// }

//or 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        int a=i-1;
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=1;k<=i-1;k++){
            cout<<a;
            a--;
        }
        cout<<endl;
    }
}