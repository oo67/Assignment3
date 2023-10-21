#include<iostream>
using namespace std;

int main(){

    int CP,SP;

    cout<<"Enter Cost price(CP):"<<endl;
    cin>>CP;
    cout<<"Enter Selling price(SP):"<<endl;
    cin>>SP;

    if(SP>CP){
        cout<<"Profit = "<<(SP-CP)<<endl;
    }
    else if(CP>SP){
        cout<<"Loss = "<<(CP-SP)<<endl;
    }
    else{
        cout<<"No profit or loss"<<endl;
    }

    return 0;
}