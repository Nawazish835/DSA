#include<iostream>
using namespace std;

char MaxOccurance(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        //lower case
        int count=s[i]-'a';
        arr[count]++;
        
    }
    int maxi=0,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
        ans=i;
        maxi=arr[i];
        }
    }
    char FinalAns='a'+ans;
    return FinalAns;

}

int main(){
    string s;
    cout<<"enter any string: ";
    cin>>s;

    cout<<MaxOccurance(s);
}