#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>


using namespace std;

int Maj_element(vector<int> nums){
    int size=nums.size()-1;
    int limit=floor(size/2);
    int freq=1;
    int ans=nums[0];
    for(int i=1;i<size;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq=1;
            ans=nums[i];
        }
        if(freq>limit){
            return ans;
        }
    }
    
    return ans;
   
    
    
}

int main(){
    int size;
   
    cout<<"enter the size of the array: ";
    cin>>size;

    vector<int> nums(size);
    cout<<"enter the elements of the array in: ";
    for (int i = 0; i < size; i++)
    {
        cin>>nums[i];
    }
    cout<<"The elements of the array are: ";
    for (int i = 0; i < size; i++)
    {
        cout<<nums[i]<<" ";
    }
    sort(nums.begin(),nums.end());
    cout<<endl<<"The majority element in this array is: "<<Maj_element(nums);
  
    
    return 0;
}