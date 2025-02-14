#include<iostream>
#include<vector>
using namespace std;

vector<int> left_rotated_array(vector<int> &array, int d){
    int size=array.size();
    d=d%size;
    vector<int> temp(array.begin(),array.begin()+d);
  
    for (int i = d; i < size; i++)
    {
        array[i-d]=array[i];
    }
    for (int i = size-d; i < size; i++)
    {
        array[i]=temp[i-(size-d)];
    }
    
    
    
    
    return array;
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
    int d;
    cout<<endl<<"enter the number of places you want to rotate array towards left: ";
    cin>>d;
    
    cout<<endl<<"the rotated array is : ";
    left_rotated_array(array,d);
    for (int i = 0; i < array.size(); i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}