#include<iostream>
using namespace std;

bool palindrome(string name,int i,int j){
    if(i>j){
        return true;
    }
    if(name[i]!=name[j]){
        return false;
    }
    else{
        return palindrome(name,i+1,j-1);
    }
}

int main(){
    string name="naan";

    bool ans=palindrome(name,0,name.length()-1);
    if(ans){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}