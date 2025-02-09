#include<iostream>
using namespace std;

int min_of_two_num(int num1,int num2){
    if(num1<num2){
        return num1;
    }
    return num2;
}

int main(){
    int num1,num2;
    cout<<"enter two numbers: ";
    cin>>num1>>num2;
    cout<<min_of_two_num(num1,num2);
    return 0;
}