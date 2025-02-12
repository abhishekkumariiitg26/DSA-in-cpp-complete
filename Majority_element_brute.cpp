#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int Maj_element(vector<int> nums){
    int size=nums.size()-1;
    int limit=floor(size/2);
    int freq;
    for(int num:nums){
        freq=0;
        for(int it:nums){
            if(num==it){
                freq++;
            }
        }
        if(freq>limit){
            return num;
        }
    }
    return -1;
   
    
    
}

int main(){
    int size;
   
    cout<<"enter the size of the array: ";
    cin>>size;

    vector<int> nums(size);
    cout<<"enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin>>nums[i];
    }
    cout<<"The elements of the array are: ";
    for (int i = 0; i < size; i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl<<"The majority element in this array is: "<<Maj_element(nums);
  
    
    return 0;
}