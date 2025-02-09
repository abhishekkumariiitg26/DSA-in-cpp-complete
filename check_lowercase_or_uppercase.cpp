#include<iostream>
using namespace std;

void lower_upper_case(char ch){
    if(ch>='a' && ch<='z'){
        cout<<"lowercase"<<endl;
    }
    if(ch>='A' && ch<='Z'){
        cout<<"uppercase"<<endl;
    }
}

int main(){
    char ch;
    cout<<"enter character to check: ";
    cin>>ch;
    lower_upper_case(ch);
    return 0;
}