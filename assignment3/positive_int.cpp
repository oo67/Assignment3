#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;

    if(num>0){
        cout<<"The number is a positive integer"<<endl;
    }
    else{
        cout<<"The number is negative and skipped"<<endl;
    }
    return 0;
}
