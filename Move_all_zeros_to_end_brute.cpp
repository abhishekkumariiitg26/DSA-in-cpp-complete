#include<iostream>
#include<vector>
using namespace std;

void move_zero_to_last(vector<int> &array){
    int size=array.size();
   
    vector<int> temp;
  
    for (int i = 0; i < size; i++)
    {
        if(array[i]!=0){
            temp.push_back(array[i]);
        }
    }
    for (int i = 0; i < temp.size(); i++)
    {
        array[i]=temp[i];
    }
    int new_index=temp.size();
    for(int i=new_index;i<size;i++){
        array[i]=0;
    }
    
    
    
    
   
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
    cout<<endl<<"new array is : ";
    move_zero_to_last(array);
    for (int i = 0; i < array.size(); i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}