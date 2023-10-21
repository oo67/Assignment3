#include<iostream>
using namespace std;

int main(){

    int x;
    cout<<"Enter the number:"<<endl;
    cin >> x;

    if(x<0){
        x=x*(-1);
    }
    cout<<"Absolute value: "<<x<<endl;   //also known as modulus of a no.
    return 0;
}