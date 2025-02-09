#include<iostream>
using namespace std;

int convert_dec_to_bin(int num){
    int sum=0;
    int pow=1;
    while(num>0){
        int rem=num%2;
        num/=2;
        sum+=(rem*pow);
        pow*=10;

    }
    return sum;
}

int main(){
    int num;
    while(true){

        cout<<"enter decimal number to convert it to binary: ";
        cin>>num;
        cout<<"The binary of "<<num<<" is: "<<convert_dec_to_bin(num)<<endl;
    }
    return 0;
}