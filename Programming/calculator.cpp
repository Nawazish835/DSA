#include<iostream>
using namespace std;
int main(){
    float a,b;
    char op;
    cout<<"enter number: "<<endl;
    cin>>a;
    cout<<"enter number: "<<endl;
    cin>>b;
    cout<<"enter operator"<<endl;
    cin>>op;

    switch(op){
        case '+': cout<<"sum is: "<<a+b;
        break;
        case '-': cout<<"subs is: "<<a-b;
        break;
        case '*': cout<<"mult is: "<<a*b;
        break;
        case '/': cout<<"div is: "<<a/b;
        break;
        default: cout<<"enter valid operator";
    }

}
