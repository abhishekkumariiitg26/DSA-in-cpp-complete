#include<iostream>
using namespace std;

bool driving_eligibility(int age){
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
    if(driving_eligibility(age)){
        cout<<"you can drive."<<endl;
    }
    else{
        
        cout<<"you cannot drive."<<endl;
    }
    return 0;
}