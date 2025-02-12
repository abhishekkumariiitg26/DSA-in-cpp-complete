#include<iostream>
#include<vector>
using namespace std;

void swap_alternate(vector<int> &array){
    for (int i = 1; i < array.size(); i++)
    {
        if(i%2!=0){

            swap(array[i-1],array[i]);
        }
        
    }
    
}
void printarray(vector<int> &array){
    for(int it: array){
        cout<<it<<" ";
    }
}

int main(){
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    vector<int> array(size);
    cout<<"enter the elements of the array: ";
    for (int  i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    cout<<"The elements of the array are: ";
    printarray(array);
    cout<<endl<<"The alternate swapped array is: ";
    swap_alternate(array);
    printarray(array);

    
    
    return 0;
}