#include <iostream>
using namespace std;

double calculate_SI(double principle, double rate, double time)
{
    return (principle * rate * time) / 100.0;
}

int main()
{
    double principle;
    double rate;
    double time;
    double amount;
    cout<<"enter Principle, rate and time : ";
    cin>>principle>>rate>>time;
    double SI=calculate_SI(principle,rate,time);
    cout<<"The simple interest is : "<<SI<<endl;
    cout<<"The amount is : "<<SI+principle<<endl;
    return 0;
}