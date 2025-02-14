#include<iostream>
#include<vector>
using namespace std;

void left_rotated_array(vector<int> &array){
    int size=array.size();
    int temp=array[0];
    for(int i=0;i<size-1;i++){
        array[i]=array[i+1];
    }
    array[size-1]=temp;
    
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
    
    cout<<endl<<"the rotated array is : ";
    left_rotated_array(array);
    for (int i = 0; i < array.size(); i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}