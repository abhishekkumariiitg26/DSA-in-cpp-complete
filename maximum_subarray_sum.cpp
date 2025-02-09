#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int max_subarr_sum(vector<int> &array){
    int size=array.size();
    int max_sum=INT_MIN;
    for(int i=0;i<size;i++){
        int currenta_sum=0;
        for(int j=i;j<size;j++){
            currenta_sum+=array[j];
            max_sum=max(currenta_sum,max_sum);
      
        }
    
    }
    return max_sum;
}

int main(){
    int size;
    cout<<"enter the size of the array: ";
    cin>>size;

    vector<int> array(size);

    cout<<"enter the elements of the array: ";
    for (int i=0;i<size;i++){
        cin>>array[i];
    }

    cout<<endl<<"The maximum subarray sum is: "<<max_subarr_sum(array);
   

}