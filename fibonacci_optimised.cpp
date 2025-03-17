#include<iostream>
using namespace std;

int find_fibonacci(int number){

    if(number<=1){
        return number;
    }
    int prev1=1,prev2=0,current;
    for(int i=2;i<=number;i++){
        current=prev1+prev2;
        prev2=prev1;
        prev1=current;
    }
    return current;
}


int main(){
    cout<<find_fibonacci(5);
    return 0;
}