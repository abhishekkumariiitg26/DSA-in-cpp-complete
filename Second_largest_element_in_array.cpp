#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int find_second_largest_element(vector<int> &array){
    if(array.size()==0){
        return -1;
    }
    int largest=INT_MIN;
    int second_largest=INT_MIN;
    for(int i=0;i<array.size();i++){
        if(array[i]>largest){
            largest=array[i];
        }
    }
    for (int i = 0; i < array.size(); i++)
    {
        if(second_largest<array[i]  &&  array[i]!=largest){
            second_largest=array[i];
        }
    }
    return second_largest;
    


}

void printarray(vector<int> &array){
    for(int it:array){
        cout<<it<<" ";
    }
}

int main(){
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;
    vector<int> array(size);
    cout<<"enter the elements of the array: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"The elements of the array are: ";
    printarray(array);
    cout<<endl<<"The second largest element of the array is: "<<find_second_largest_element(array);
    return 0;
}