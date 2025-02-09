#include<iostream>
using namespace std;

bool voting_eligibility(int age){
    if(age<18){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    int age;
    cout<<"enter your age: ";
    cin>>age;
    if(voting_eligibility(age)){
        cout<<"you can vote."<<endl;
    }
    else{
        
        cout<<"you cannot vote."<<endl;
    }
    return 0;
}