#include<iostream>
using namespace std;
int main(){
    int amount,note;
    cout<<"enter number: ";
    cin>>amount;

    if(amount>=500){
        note=amount/500;
        amount=amount-(note*500);
        cout<<"500 notes: "<<note<<endl;
    }
    if(amount>=50){
        note=amount/50;
        amount=amount-(note*50);
        cout<<"50 notes: "<<note<<endl;
    }
    if(amount>=20){
        note=amount/20;
        amount=amount-(note*20);
        cout<<"20 notes: "<<note<<endl;
    }
    if(amount>=1){
        note=amount/1;
        amount=amount-(note*1);
        cout<<"1 notes: "<<note<<endl;
    }
}


