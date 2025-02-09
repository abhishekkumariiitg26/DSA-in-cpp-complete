#include<iostream>
using namespace std;

void check_pos_neg_or_zero(int num){
    if(num<0){
        cout<<"negative number"<<endl;
    }
    else if(num==0){
        cout<<"number is zero"<<endl;
        
    }
    else if(num>0){
        cout<<"positive number"<<endl;

    }
    else{
        cout<<"invalid"<<endl;
    }
}

int main(){
    int num;
    cout<<"enter number to check whether it is zero, positive or negative : ";
    cin>>num;
    check_pos_neg_or_zero(num);
    return 0;
}