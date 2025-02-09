#include<iostream>
using namespace std;

int factorial(int num){
    if(num==0 || num==1){
        return 1;
    }
    return num*factorial(num-1);
}

int main(){

    int num;
    cout<<"enter number to find factorial : ";
    cin>>num;
    cout<<"the factorial of "<<num<<" is : "<<factorial(num);
    return 0;
}