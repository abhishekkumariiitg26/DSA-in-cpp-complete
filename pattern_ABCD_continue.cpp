

#include<iostream>
using namespace std;
int main(){
    int n;
    char ch;
    cout<<"enter n: ";
    cin>>n;
    ch='A';
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
    return 0;
}