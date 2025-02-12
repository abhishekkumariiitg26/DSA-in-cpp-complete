#include<iostream>
#include<vector>

using namespace std;

vector<int> PairSum(vector<int> nums, int target){
    vector<int> result;
    for (int i = 0; i < nums.size()-1; i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if(nums[i]+nums[j]==target){
                result.push_back(i);
                result.push_back(j); 
                return result;               
            }
        }
        
    }
    
    
}

int main(){
    int size;
    int target;
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
    cout<<endl<<"enter target: ";
    cin>>target;
    vector<int> result=PairSum(nums,target);
    for(int it: result){
        cout<<it<<" ";
    }

    
    return 0;
}