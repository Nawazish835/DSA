// Q.to print 
// ****
//  ***
//   **
//    *
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter number: ";
//     cin >> n;
//     int i = 1;
//     while (i <= n) {
//         int space=i-1;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j = 1;
//         while (j <= n - i + 1) {
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int i = 1;
    int nsp=0;
    int nst=n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            cout<<" ";
        }
        nsp++;
        for(int k=1;k<=nst;k++){
            cout<<"*";
        }
        nst--;
        cout<<endl;
    } 

}
