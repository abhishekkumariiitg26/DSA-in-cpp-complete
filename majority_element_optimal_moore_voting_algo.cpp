#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>


using namespace std;

int Maj_element(vector<int> nums){
    int freq=0;
    int ans=0;
    for(int i=0;i<nums.size();i++){
        if(freq==0){
            ans=nums[0];
        }
        if(ans==nums[0]){
            freq++;
        }
        else{
            freq--;
        }
    }

    // for no majority element condition
    int count=0;
    for(int num:nums){
        if(num==ans){
            count++;
        }
    }
    if(count>(nums.size())/2){

        return ans;
    }
    else{
        return -1;
    }

    
    
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
   
    cout<<endl<<"The majority element in this array is: "<<Maj_element(nums);
  
    
    return 0;
}