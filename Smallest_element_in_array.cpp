#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int find_smallest_element(vector<int> &array ){
    int smallest=INT_MAX;
    for (int i = 0; i < array.size(); i++)
    {
        if(smallest>array[i]){
            smallest=array[i];
        }
    }
    return smallest;
    
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
    cout<<endl<<"The smallest number among them is : "<<find_smallest_element(array);
    
    
    return 0;
}