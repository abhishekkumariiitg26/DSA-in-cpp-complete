#include<iostream>
using namespace std;

void check_even_or_odd(int num){
    if(num%2==0){
        cout<<"even"<<endl;
        
    }
    else{

        cout<<"odd"<<endl;
    }
}

int main(){
    int num;
    cout<<"enter number: ";
    cin>>num;
    check_even_or_odd(num);
    return 0;
}