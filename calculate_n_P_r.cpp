#include<iostream>
using namespace std;

int nPr(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*nPr(n-1);
}

int main(){
    int n,r;
    cout<<"enter n and r: ";
    cin>>n>>r;
    int npr=nPr(n)/nPr(n-r);
    cout<<npr;
    return 0;
}