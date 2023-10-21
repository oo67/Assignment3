#include<iostream>
using namespace std;

int main(){

    char op;
    float num1,num2;
    cout<<"Enter the value of num1:"<<endl;
    cin>>num1;
    cout<<"Enter the value of num2:"<<endl;
    cin>>num2;
    cout<<"Enter an operator(+,-,*,/):";
    cin>>op;

    // switch(op){

    //     case '+':
    //     cout<<"Sum is:"<<(a+b)<<endl;
    //     break;

    //     case '-':
    //     cout<<"Difference is:"<<(a-b)<<endl;
    //     break;

    //     case '*':
    //     cout<<"Product is:"<<(a*b)<<endl;
    //     break;

    //     case '/':
    //     cout<<"Division is:"<<(a/b)<<endl;
    //     break;

    //     default:
    //     cout<<"Invalid operator"<<endl;
    //     break;

    switch (op) {
     case '+':
     cout << num1 << " + " << num2 << " = " << num1 + num2;
     break;
     case '-':
     cout << num1 << " - " << num2 << " = " << num1 - num2;
     break;
     case '*':
     cout << num1 << " * " << num2 << " = " << num1 * num2;
     break;
     case '/':
     cout << num1 << " / " << num2 << " = " << num1 / num2;
     break;
     default:
     cout << "Error! The operator is not correct";
     break;
    }
    
    return 0;
}