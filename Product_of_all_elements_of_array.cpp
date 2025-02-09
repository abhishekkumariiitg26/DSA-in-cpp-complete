#include<iostream>
#include<vector>

using namespace std;

int product_of_elements(vector<int> &array ){
    int product=1;
    for(int num:array){
        product*=num;
    }
    return product;
  
    
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
    cout<<endl<<"The product of all elements of the array is: "<<product_of_elements(array);
    
   
    
    
    
    return 0;
}