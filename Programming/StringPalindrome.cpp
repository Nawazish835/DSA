#include<iostream>
using namespace std;
//upper case to lower case 
int LowerCase(char ch){
    if(ch>= 'a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool reverse(char ch[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        if(LowerCase(ch[start])!=LowerCase(ch[end])){ // considering upper case and lower case same 
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}

int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;
    char ch[20];
    cout<<"enter name: ";
    cin>>ch;
    bool pal = reverse(ch,n);

   cout<<"palindrome or not: "<<pal<<endl;
    
}