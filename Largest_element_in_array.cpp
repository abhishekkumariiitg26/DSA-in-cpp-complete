#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int largest_element(vector<int> &array ){
    int largest=INT_MIN;
    for (int i = 0; i < array.size(); i++)
    {
        if(largest<array[i]){
            largest=array[i];
        }
    }
    return largest;
    
}

int main(){
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    vector<int> array(size);
    cout<<"enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    cout<<endl<<"the elements of the array are: ";
    for (int i = 0; i < array.size(); i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl<<"The largest number among them is : "<<largest_element(array);
    
    
    return 0;
}