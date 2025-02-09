#include<iostream>
#include<cmath>
using namespace std;
 
bool check_prime(int num){
    if(num<2){
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num%i==0)
        {
            return false;
        }
        
    }
    return true;
    
}


int main(){
    int num;
    cout<<"enter number to check prime: ";
    cin>>num;
    if(check_prime(num)){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    return 0;
}