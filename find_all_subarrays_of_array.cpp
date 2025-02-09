#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;

    vector<int> array(size);

    cout<<"enter the elements of the array: ";
    for (int i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<endl<<"The elements of the array are: ";
    for (int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    
    cout<<endl<<"The subarrays are: "<<endl;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            for(int k=i;k<=j;k++){
                cout<<array[k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

}