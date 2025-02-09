#include<iostream>
using namespace std;

int sum_to_n(int n, int div){
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        if(i%div==0){

            sum+=i;
        }
    }
    return sum;
    
}

int main(){
    int num,div;
    cout<<"enter the number till you want to calculate the sum: ";
    cin>>num;
    cout<<"enter the number for divisibility condition: ";
    cin>>div;
    cout<<"the sum is: "<<sum_to_n(num,div);
    return 0;
}