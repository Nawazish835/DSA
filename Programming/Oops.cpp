#include<iostream>
using namespace std;

class hello{ // creation of class
    int value;
    public:

    int getvalue(){
        return value;
    }
    void setvalue(int v1){
        value=v1;
    }

};

int main(){
    // creation of object,static allocation
    hello v1; 
    v1.setvalue(60);
    cout<<"value is: "<<v1.getvalue()<<endl;
    // // dynamic allocation
    hello *v2= new hello;
    v2->setvalue(70);
    cout<<"value is: "<<(*v2).getvalue()<<endl;
    cout<<"value is: "<<v2->getvalue()<<endl;
}