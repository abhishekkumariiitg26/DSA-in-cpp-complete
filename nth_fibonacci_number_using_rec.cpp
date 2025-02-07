#include<iostream>
using namespace std;

int find_fibonacci(int num){
    if(num==1){
        return 0;
    }
    if(num==2){
        return 1;
    }
    return find_fibonacci(num-1)+find_fibonacci(num-2);
}

int main(){

    int position;
    cout<<"enter the position you want the fibonacci number: ";
    cin>>position;
    cout<<find_fibonacci(position);
    return 0;
}