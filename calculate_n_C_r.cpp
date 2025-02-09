#include<iostream>
using namespace std;

int nCr(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*nCr(n-1);
}

int main(){
    int n,r;
    cout<<"enter n and r: ";
    cin>>n>>r;
    int ncr=nCr(n)/(nCr(r)*nCr(n-r));
    cout<<ncr;
    return 0;
}