// ABCD
// ABCD
// ABCD
// ABCD

#include<iostream>
using namespace std;
int main(){
    int n;
    char ch;
    cout<<"enter n: ";
    cin>>n;
 
    for(int i=1;i<=n;i++){
        ch='A';
        for(char j=1;j<=n;j++){
            cout<<ch++;
        }
        cout<<endl;
    }
    return 0;
}