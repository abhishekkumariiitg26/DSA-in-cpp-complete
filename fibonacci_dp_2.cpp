#include<iostream>
#include<vector>
using namespace std;

int find_fib(int number, vector<int> &dp){
    if(number<=1){
        return number;
    }
    if(dp[number]!=-1){
        return dp[number];
    }
    return dp[number]=find_fib(number-1,dp)+find_fib(number-2,dp);

}

int main(){
    int n;
    cout<<"enter position: ";
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<find_fib(n,dp);
    

    return 0;
}