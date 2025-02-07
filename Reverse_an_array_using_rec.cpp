#include<iostream>
#include<vector>
using namespace std;

void rev_arra_rec(vector<int> &array,int l,int r){
    if(l>=r){
        return ;
    }
    swap(array[l],array[r]);
    rev_arra_rec(array,l+1,r-1);

}

int main(){
    
    vector<int> array={1,2,3,4,5,6,7,8,9,10};
    rev_arra_rec(array,0,array.size()-1);
    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }

    return 0;
}