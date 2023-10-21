#include<iostream>
using namespace std;

int main(){

    int marks;
    cout << "Enter your marks: " <<endl;
    cin>>marks;

    if(marks<=100 && marks>=90){
        cout << "Your grade is A+"<<endl;
    }
    else if(marks<=90 && marks>=80){
        cout<<"Your grade is A"<<endl;
    }
    else if(marks<=80 && marks>=70){
        cout<<"Your grade is B+"<<endl;
    }
    else if(marks<=70 && marks>=60){
        cout<<"Your grade is B"<<endl;
    }
    else if(marks<=60 && marks>=50){
        cout<<"Your grade is C"<<endl;
    }
    else if(marks<=50 && marks>=40){
        cout<<"Your grade is D"<<endl;
    }
    else if(marks<=40 && marks>=30){
        cout<<"Your grade is E"<<endl;
    }
    else if(marks<=30 && marks>=0){
        cout<<"Your grade is F"<<endl;
    }
    else{
        cout<<"Enter valid grade"<<endl;
    }

    return 0;

}