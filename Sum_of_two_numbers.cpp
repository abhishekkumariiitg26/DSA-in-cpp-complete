#include<iostream>
using namespace std;

int sum(int num1,int num2){
    return num1+num2;
}

int main(){
    int num1,num2;
    cout<<"enter the two numbers to add:"<<endl;
    cin>>num1>>num2;
    cout<<"The sum of "<<num1<<" and "<<num2<<" is : "<<sum(num1,num2);
    return 0;
}