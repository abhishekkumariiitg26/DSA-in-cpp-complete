#include<iostream>
using namespace std;
int array_global[10]; // global array is initialised with zero
int main(){
    int array_local[10]; // local array is initialised with garbage value.
    cout<<array_global[0]<<endl;
    cout<<array_global[1]<<endl;
    cout<<array_global[2]<<endl;
    cout<<array_global[3]<<endl;
    cout<<array_global[10]<<endl;
    cout<<array_local[0]<<endl;
    cout<<array_local[1]<<endl;
    cout<<array_local[2]<<endl;
    cout<<array_local[3]<<endl;
    cout<<array_local[10]<<endl;
    return 0;
}