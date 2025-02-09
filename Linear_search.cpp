#include<iostream>
#include<vector>

using namespace std;

int linear_searching(vector<int> &array, int target ){
    
    for (int i = 0; i < array.size(); i++)
    {
        if(target==array[i]){
           return i;
        }
    }
    return -1;
  
    
}

int main(){
    int size,target;
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
    cout<<endl<<"enter the target to find: ";
    cin>>target;
    cout<<endl<<"The target is at the index: "<<linear_searching(array,target);
    
    
    return 0;
}