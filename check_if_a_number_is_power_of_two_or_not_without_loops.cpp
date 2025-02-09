#include<iostream>
using namespace std;

bool check_power_of_two(int n){
    return n>0 && ((n&(n-1))==0);
}

int main(){
    int num;
    cout<<"enter number to check whether it is power of two or not: ";
    cin>>num;
    if(check_power_of_two(num)){
        cout<<"yes power of 2"<<endl;
    }
    else{
        cout<<"no, not power of two."<<endl;
    }
    return 0;
}