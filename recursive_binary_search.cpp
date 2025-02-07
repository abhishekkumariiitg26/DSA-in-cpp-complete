#include<iostream>
#include<vector>
using namespace std;

int bin_search_rec(vector<int> arr, int target,int start,int end){
    if(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            return bin_search_rec(arr,target,mid+1,end);
        }
        if(arr[mid]>target){
            return bin_search_rec(arr,target,start,mid-1);
        }

    }
    else{
        return -1;
    }
}

int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    int target=9;
    int start=0;
    int end=arr.size()-1;
    cout<<bin_search_rec(arr,target,start,end);
    return 0;
}