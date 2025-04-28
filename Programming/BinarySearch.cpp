#include<iostream>
using namespace std;

// Note: binary search always works on sorted array.

int BinarySearch(int arr[],int n,int element){
    int start=0;
    int end=n-1;

    while(start<=end){
        int mid=start+(end-start)/2;   //(start-end)/2
        if(arr[mid]==element){
            return mid;
        }
        if(element>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int odd[5]={1,2,3,4,5};
    int even[7]={0,1,2,4,5,6,7};

    int oddIndex=BinarySearch(odd,5,10);

    cout<<"index is: "<<oddIndex<<endl;

    int evenIndex=BinarySearch(even,7,0);

    cout<<"index is: "<<evenIndex;
}

// binary search funtion
// #include<iostream>. 
// #include<vector>
// #include<algorithm>

// using namespace std;

// int main(){
//     vector<int> v;

//     v.push_back(1);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(7);

//     cout<<"present=1 , not present=0: "<<binary_search(v.begin(),v.end(),3);
// }