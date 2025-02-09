#include<iostream>
#include<climits>
using namespace std;

int rev_integer(int num){
    int new_num=0;
    int pow=1;
    while(num>0){
        int rem=num%10;
        if (new_num > INT_MAX / 10 || new_num < INT_MIN / 10) {
            return 0;  
        }
        new_num=new_num*10+rem;
        num/=10;
       
    }
    return new_num;
}

int main(){
    int num;
    cout<<"enter the number to reverse: ";
    cin>>num;
    cout<<"The reversed integer is: "<<rev_integer(num);
    return 0;
}