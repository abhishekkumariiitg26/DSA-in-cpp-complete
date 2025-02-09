#include<iostream>
using namespace std;

int sum_to_n(int n){
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    return sum;
    
}

int main(){
    int num;
    cout<<"enter the number till you want to calculate the sum: ";
    cin>>num;
    cout<<"the sum is: "<<sum_to_n(num);
    return 0;
}