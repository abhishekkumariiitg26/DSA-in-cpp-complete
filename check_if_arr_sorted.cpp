#include<iostream>
#include<vector>
using namespace std;

bool is_sorted_array(vector<int> &nums, int n){
    if(n==0 || n==1){
        return true;
    }
    return { (nums[n-1]>=nums[n-2]) && is_sorted_array(nums,n-1) };
}

int main(){
    vector<int> nums={1,2,4,4,5,6};
    if(is_sorted_array(nums,nums.size())){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
    return 0;
}