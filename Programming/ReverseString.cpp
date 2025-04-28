#include<iostream>
using namespace std;

int length(char ch[]){
    int count=0;
    for(int i=0;ch[i] != '\0';i++){
        count++;
    }
    return count;
}

void reverse(char ch[],int n){
    int start=0;
    int end=n-1;

    while(start<=end){
        swap(ch[start],ch[end]);
        start++;
        end--;
    }
}

int main(){
    
    char ch[20];
    cout<<"enter your name: ";
    cin>>ch;

    cout<<"Name is: "<<ch<<endl;

    int len=length(ch);
    cout<<"length of string is: " <<len<<endl;

    reverse(ch,len);
    cout<<ch;
}