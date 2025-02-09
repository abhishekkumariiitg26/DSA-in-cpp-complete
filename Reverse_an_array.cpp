#include<iostream>
#include<vector>

using namespace std;

void reversing_array(vector<int> &array ){
    
    int start=0;
    int end=array.size()-1;
    while (start<=end)
    {
        swap(array[start],array[end]);
        start++;
        end--;
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
    reversing_array(array);
    cout<<endl<<"the elements of the reversed array are: ";
    for (int i = 0; i < array.size(); i++)
    {
        cout<<array[i]<<" ";
    }
    
   
    
    
    
    return 0;
}