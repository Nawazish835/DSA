#include<iostream>
using namespace std;

void Reverse(string &name,int start,int end){

    if(start>end){
        return;
    }
    swap(name[start],name[end]);
    start++;
    end--;

    Reverse(name,start,end);
}

int main(){
    string name="Nawazish";

    Reverse(name,0,name.length()-1);

    cout<<name<<endl;
}