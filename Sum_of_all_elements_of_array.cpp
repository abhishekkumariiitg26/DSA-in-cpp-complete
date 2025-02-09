#include<iostream>
#include<vector>

using namespace std;

int sum_of_elements(vector<int> &array ){
    int sum=0;
    for(int num:array){
        sum+=num;
    }
    return sum;
  
    
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
    cout<<endl<<"The sum of all elements of the array is: "<<sum_of_elements(array);
    
   
    
    
    
    return 0;
}