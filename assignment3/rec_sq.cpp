#include<iostream>
using namespace std;

int main(){

    int l,b;
    cout<<"Enter the length:"<<endl;
    cin>>l;
    cout<<"Enter the bredth:"<<endl;
    cin>>b;

    if(l==b){
        cout<<"Its a Square"<<endl;
    }
    else{
        cout<<"Its a Rectangle"<<endl;
    }

    return 0;
}
