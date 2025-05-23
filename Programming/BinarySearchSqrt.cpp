#include<iostream>
using namespace std;

long long int SQRT(int n){
    int start=0;
    int end=n;
    long long int mid=start+(end-start)/2;
    
    long long int ans=-1;

    while(start<=end){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

double Accurate(int n,int precision,int TemSol){
    double factor=1;
    double ans=TemSol;

    for(double i=0;i<precision;i++){
        factor=factor/10;

        for(double j=ans;j*j<n;j=j+factor){
            ans =j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    int TempSol=SQRT(n);
    cout<<"square root is: "<<Accurate(n,3,TempSol);
}