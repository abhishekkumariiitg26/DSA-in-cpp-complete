#include<iostream>
using namespace std;

int bin_to_dec_conversion(int num){
    int sum=0;
    int pow=1;
    while(num>0){
        int rem=num%10;
        num/=10;
        sum+=rem*pow;
        pow*=2;
    }
    return sum;
}

int main(){
    int num;
    cout<<"enter binary number to convert to decimal: ";
    cin>>num;
    cout<<"The decimal of "<<num<<" is: "<<bin_to_dec_conversion(num);
    return 0;
}